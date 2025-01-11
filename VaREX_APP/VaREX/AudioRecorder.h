#ifndef AUDIORECORDER_H
#define AUDIORECORDER_H

#include <QObject>
#include <QtMultimedia/QAudioSource>
#include <QFile>

class AudioRecorder : public QObject
{
    Q_OBJECT
public:
    explicit    AudioRecorder(QObject *parent = nullptr);
    void        startRecording(const QString &filename);
    void        stopRecording();

private:
    QAudioSource    *audioSource = nullptr;
    QFile           outputFile;
    QIODevice       *ioDevice = nullptr;
};

#endif // AUDIORECORDER_H
