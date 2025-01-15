#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QUrl>
#include <QDir>
#include <QMessageBox>
#include <QProcess>
#include <QMovie>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , micAudioInput(new QAudioInput(this))
    , speakerAudioInput(nullptr)
    , isRecording(false)
    , audioFilePath("C:/Users/valle/Desktop/recordings/")
    , loadingAnimation(new QLabel(this))
{
    ui->setupUi(this);

    connect(ui->recordButton, &QPushButton::clicked,
            this, &MainWindow::onRecordButtonClicked);

    connect(ui->inputDeviceComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &MainWindow::onInputDeviceChanged);

    connect(ui->summaryButton, &QPushButton::clicked, this, &MainWindow::onSummaryButtonClicked);

    inputDevices = findInputDevices();
    populateDeviceComboBoxes();

    micCaptureSession.setAudioInput(micAudioInput);
    micCaptureSession.setRecorder(&micMediaRecorder);

    movie = new QMovie("../../assets/loading.gif");
    loadingAnimation->setMovie(movie);
    loadingAnimation->setScaledContents(true);
    // move the loading animation to the center of the window with size of image in mind
    loadingAnimation->move(this->width() / 2 - 75, this->height() / 2 - 75);
    loadingAnimation->setFixedSize(150, 150);
    loadingAnimation->setVisible(false);

    movie->start();

    foreach (const QAudioDevice &device, inputDevices)
    {
        if (device.description().contains("Stereo Mix", Qt::CaseInsensitive))
        {
            speakerAudioInput = new QAudioInput(device, this);
            speakerCaptureSession.setAudioInput(speakerAudioInput);
            speakerCaptureSession.setRecorder(&speakerMediaRecorder);
            qDebug() << "Recording speakers from:" << speakerAudioInput->device().description();
            break;
        }
    }

    if (!speakerAudioInput)
    {
        ui->stereoMixMissing->setText("Stereo Mix -laitetta ei löytynyt.");
        ui->recordButton->setEnabled(false);
    }

    QMediaFormat format;
    format.setFileFormat(QMediaFormat::Wave);
    micMediaRecorder.setMediaFormat(format);
    speakerMediaRecorder.setMediaFormat(format);

    micMediaRecorder.setQuality(QMediaRecorder::HighQuality);
    speakerMediaRecorder.setQuality(QMediaRecorder::HighQuality);
    addRecordingToList();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete micAudioInput;
    if (speakerAudioInput)
        delete speakerAudioInput;
    delete loadingAnimation;
    delete movie;
}

void    MainWindow::populateDeviceComboBoxes()
{
    ui->inputDeviceComboBox->clear();

    foreach (const QAudioDevice &device, inputDevices) {
        ui->inputDeviceComboBox->addItem(device.description());
    }
}

void MainWindow::onInputDeviceChanged(int index)
{
    if (index >= 0 && index < inputDevices.size()) {
        QAudioDevice selectedDevice = inputDevices.at(index);
        qDebug() << "Selected input device:" << selectedDevice.description();
        
        if (micAudioInput)
        {
            delete micAudioInput;
            micAudioInput = nullptr;
        }

        micAudioInput = new QAudioInput(selectedDevice, this);
        micCaptureSession.setAudioInput(micAudioInput);

        qDebug() << "Recording microphone from:" << micAudioInput->device().description();
    }
}

QList<QAudioDevice> MainWindow::findInputDevices()
{
    return QMediaDevices::audioInputs();;
}

void    MainWindow::addRecordingToList()
{
    QDir dir(audioFilePath);
    QStringList files = dir.entryList(QStringList() << "*.wav", QDir::Files);
    foreach(QString file, files) {
        //check if file already exists
        if (ui->recordingsList->findItems(file, Qt::MatchExactly).isEmpty()) {
            QListWidgetItem *item = new QListWidgetItem(file);
            ui->recordingsList->addItem(item);
        }
    }
}

void    MainWindow::onSummaryButtonClicked()
{
    QString pythonPath = "C:/Users/valle/AppData/Local/Microsoft/WindowsApps/python3.exe";
    QString transcript_scriptPath = "C:/Users/valle/Desktop/coding/VaREX/transcript.py";

    loadingAnimation->setVisible(true);

    QProcess *process = new QProcess(this);
    connect(process, &QProcess::readyReadStandardOutput, [process](){
        qDebug() << "Output: " << process->readAllStandardOutput();
    });
    connect(process, &QProcess::readyReadStandardError, [process](){
        qDebug() << "Error: " << process->readAllStandardError();
    });

    connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            [this, process](int exitCode, QProcess::ExitStatus exitStatus){
                loadingAnimation->setVisible(false);
                if (exitStatus == QProcess::NormalExit && exitCode == 0)
                {
                    QMessageBox::information(this, "Success!", "Transkriptio on valmis.");
                }
                else
                {
                    QMessageBox::critical(this, "Error!", "Transkriptin luonti epäonnistui.");
                }
                process->deleteLater();
            });
    
    process->start(pythonPath, QStringList() << transcript_scriptPath);
}

void    MainWindow::onRecordButtonClicked()
{
    if (!isRecording)
    {
        QString micFileName = (audioFilePath + QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss") + "_mic.wav");
        QString speakerFileName = (audioFilePath + QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss") + "_speaker.wav");

        qDebug() << micFileName;
        qDebug() << speakerFileName;

        qDebug() << "Recording microphone from:" << micAudioInput->device().description();
        qDebug() << "Recording speakers from:" << speakerAudioInput->device().description();

        micMediaRecorder.setOutputLocation(QUrl::fromLocalFile(micFileName));
        addRecordingToList();
    

        speakerMediaRecorder.setOutputLocation(QUrl::fromLocalFile(speakerFileName));
        addRecordingToList();

        qDebug() << "Aloitetaan nauhoitus...";
        qDebug() << "Recording microphone from:" << micAudioInput->device().description();
        qDebug() << "Recording speakers from:" << speakerAudioInput->device().description();
        micMediaRecorder.record();
        speakerMediaRecorder.record();
        ui->recordButton->setText("Lopeta nauhoitus");
        isRecording = true;
    }
    else
    {
        qDebug() << "Lopetetaan nauhoitus...";
        micMediaRecorder.stop();
        speakerMediaRecorder.stop();
        ui->recordButton->setText("Aloita nauhoitus");
        isRecording = false;
        addRecordingToList();
    }
}
