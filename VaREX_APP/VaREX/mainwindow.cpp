#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QUrl>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , isRecording(false)
{
    ui->setupUi(this);

    connect(ui->recordButton, &QPushButton::clicked,
            this, &MainWindow::onRecordButtonClicked);

    connect(ui->inputDeviceComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &MainWindow::onInputDeviceChanged);

    connect(ui->outputDeviceComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &MainWindow::onOutputDeviceChanged);

    inputDevices = findInputDevices();
    outputDevices = findOutputDevices();

    populateDeviceComboBoxes();

    micCaptureSession.setAudioInput(&micAudioInput);
    micCaptureSession.setRecorder(&micMediaRecorder);

    speakerCaptureSession.setAudioInput(&speakerAudioInput);
    speakerCaptureSession.setRecorder(&speakerMediaRecorder);

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
}

void    MainWindow::populateDeviceComboBoxes()
{
    ui->inputDeviceComboBox->clear();
    ui->outputDeviceComboBox->clear();

    foreach (const QAudioDevice &device, inputDevices) {
        ui->inputDeviceComboBox->addItem(device.description());
    }

    foreach (const QAudioDevice &device, outputDevices) {
        ui->outputDeviceComboBox->addItem(device.description());
    }
}

void MainWindow::onInputDeviceChanged(int index)
{
    if (index >= 0 && index < inputDevices.size()) {
        QAudioDevice selectedDevice = inputDevices.at(index);
        qDebug() << "Selected input device:" << selectedDevice.description();
        micAudioInput.setDevice(selectedDevice);
    }
}

void MainWindow::onOutputDeviceChanged(int index)
{
    if (index >= 0 && index < outputDevices.size()) {
        QAudioDevice selectedDevice = outputDevices.at(index);
        qDebug() << "Selected output device:" << selectedDevice.description();
        speakerAudioInput.setDevice(selectedDevice);
        // Tähän voit lisätä logiikan output-laitteen käyttöön, jos tarvitaan
    }
}

QList<QAudioDevice> MainWindow::findInputDevices()
{
    return QMediaDevices::audioInputs();;
}

QList<QAudioDevice> MainWindow::findOutputDevices()
{
    return QMediaDevices::audioOutputs();
}

void    MainWindow::addRecordingToList()
{
    QDir dir("C:/Users/valle/Desktop/recordings");
    QStringList files = dir.entryList(QStringList() << "*.wav", QDir::Files);
    foreach(QString file, files) {
        //check if file already exists
        if (ui->recordingsList->findItems(file, Qt::MatchExactly).isEmpty()) {
            QListWidgetItem *item = new QListWidgetItem(file);
            ui->recordingsList->addItem(item);
        }
    }
}

void    MainWindow::onRecordButtonClicked()
{
    if (!isRecording)
    {
        QString micFileName = ("C:/Users/valle/Desktop/recordings/" + QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss") + "_mic.wav");
        QString speakerFileName = ("C:/Users/valle/Desktop/recordings/" + QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss") + "_speaker.wav");

        qDebug() << micFileName;
        qDebug() << speakerFileName;


        micMediaRecorder.setOutputLocation(QUrl::fromLocalFile(micFileName));
        addRecordingToList();
    

        speakerMediaRecorder.setOutputLocation(QUrl::fromLocalFile(speakerFileName));
        addRecordingToList();

        qDebug() << "Aloitetaan nauhoitus...";
        micMediaRecorder.record();
        speakerMediaRecorder.record();
        ui->recordButton->setText("Lopeta nauhoitus");
        isRecording = true;
        /*mediaRecorder.setOutputLocation(QUrl::fromLocalFile(micFileName));
        addRecordingToList();
        qDebug() << "Aloitetaan nauhoitus...";
        mediaRecorder.record();
        ui->recordButton->setText("Lopeta nauhoitus");
        isRecording = true;*/
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
