#include <QCoreApplication>
#include <QDebug>
#include "filedatabase.h"
#include "server.h"
#include "QJsonObject"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    FileDatabase database("config.json");
    QJsonObject obj;
//    database.get_config(obj);
//    foreach (QJsonValue v, obj) {
//       // o.value()
//        qDebug()<<v.toString();
//    }
//    foreach (QString str, obj.keys()) {
//       // o.value()
//        qDebug()<<str;
//        switch(str)
//        {
//            case "camera_total_number":
//            break;
//        default:break;
//        }
//    }
    Server s(&database);
    return a.exec();
}

