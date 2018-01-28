#ifndef CAMERAMANAGER_H
#define CAMERAMANAGER_H

#include <QObject>
#include <QList>
#include <QDebug>
#include "QJsonArray"
#include "camera.h"
class CameraManager : public QObject
{
    Q_OBJECT
public:
    explicit CameraManager(QJsonObject onfig,QObject *parent = 0);
    void set_config(QJsonObject config)
    {
        QJsonArray cams_config=config["cameras"].toArray();
        foreach (QJsonValue v, cams_config)
        {
            QJsonObject o=v.toObject();
            qDebug()<<o["url"];

        }

    }
    void get_config(QJsonObject &config)
    {

    }

signals:

public slots:
private:
    QList <Camera *>cameras;
};

#endif // CAMERAMANAGER_H
