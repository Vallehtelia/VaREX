#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtMultimedia/QMediaCaptureSession>
#include <QtMultimedia/QMediaRecorder>
#include <QtMultimedia/QAudioInput>
#include <QtMultimedia/QMediaFormat>
#include <QtMultimedia/QAudioDevice>
#include <QtMultimedia/QMediaDevices>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void    addRecordingToList();
    void    populateDeviceComboBoxes();
    QList<QAudioDevice> findInputDevices();

private slots:
    void    onRecordButtonClicked();
    void    onInputDeviceChanged(int index);
    void    onSummaryButtonClicked();

private:
    Ui::MainWindow  *ui;
    bool            isRecording;
    QList<QAudioDevice> inputDevices;
    QList<QAudioDevice> outputDevices;
    QString         audioFilePath;
    QLabel          *loadingAnimation;
    QMovie          *movie;

    QMediaCaptureSession    micCaptureSession;
    QAudioInput             *micAudioInput;
    QMediaRecorder          micMediaRecorder;

    QMediaCaptureSession    speakerCaptureSession;
    QAudioInput             *speakerAudioInput;
    QMediaRecorder          speakerMediaRecorder;
};

#endif // MAINWINDOW_H
