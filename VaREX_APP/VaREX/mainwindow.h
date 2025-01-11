#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtMultimedia/QMediaCaptureSession>
#include <QtMultimedia/QMediaRecorder>
#include <QtMultimedia/QAudioInput>
#include <QtMultimedia/QMediaFormat>

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
private slots:
    void    onRecordButtonClicked();

private:
    Ui::MainWindow  *ui;
    bool            isRecording;

    QMediaCaptureSession    captureSession;
    QAudioInput             audioInput;
    QMediaRecorder          mediaRecorder;
};

#endif // MAINWINDOW_H
