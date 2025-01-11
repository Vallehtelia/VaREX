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

    captureSession.setAudioInput(&audioInput);
    captureSession.setRecorder(&mediaRecorder);

    QMediaFormat format;
    format.setFileFormat(QMediaFormat::Wave);
    mediaRecorder.setMediaFormat(format);

    mediaRecorder.setQuality(QMediaRecorder::HighQuality);
    addRecordingToList();
}

MainWindow::~MainWindow()
{
    delete ui;
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
        QString fileName = "C:/Users/valle/Desktop/recordings/" + QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss") + ".wav";
        mediaRecorder.setOutputLocation(QUrl::fromLocalFile(fileName));
        addRecordingToList();
        qDebug() << "Aloitetaan nauhoitus...";
        mediaRecorder.record();
        ui->recordButton->setText("Lopeta nauhoitus");
        isRecording = true;
    }
    else
    {
        qDebug() << "Lopetetaan nauhoitus...";
        mediaRecorder.stop();
        ui->recordButton->setText("Aloita nauhoitus");
        isRecording = false;
        addRecordingToList();
    }
}
