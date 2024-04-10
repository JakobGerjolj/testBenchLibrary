#ifndef CAMERA_H
#define CAMERA_H

#include <QObject>
#include <QMap>
#include <QProcess>
#include <QDebug>
#include <QTimer>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
enum Result{
    leftLEVER,
    rightLEVER,
    syncBUTTON,
    stationBUTTON,
    dockBUTTON

};
class Camera : public QObject
{
    Q_OBJECT
public:
    explicit Camera(QObject *parent = nullptr);
    void takePicture();
    void processData();
    bool getStatus(Result);


signals:
    void pictureTaken();

private:

    QMap<QString, bool> m_resultOfLights;
    QString m_command{"python"};
    QProcess* m_takePictureProcess{nullptr};

};

#endif // CAMERA_H
