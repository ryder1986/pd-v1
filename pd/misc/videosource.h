#ifndef VIDEOSOURCE_H
#define VIDEOSOURCE_H

#include <QObject>
#include <QThread>
#include "tool1.h"
class VideoSource : public QThread
{
    Q_OBJECT
public:
    explicit VideoSource();
private:
    void run()
    {
        prt(info,"runing thread");
        QThread::sleep(1);
    }

signals:

public slots:
};

#endif // VIDEOSOURCE_H
