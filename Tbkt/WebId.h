#ifndef WEBID_H
#define WEBID_H
#include <QObject>
#include <QDebug>
#include "beikeppt.h"
class WebClass : public QObject
{
    Q_OBJECT
private:
    BeiKePpt *beikeppt;
public:
    QString Ppt_url;
    QString Ppt_urlmsgtype;
    public slots:
    void jscallme(const QString& msgtype,const QString& msg)
    {
        beikeppt = new BeiKePpt;
//        beikeppt->pushButton_clicked(QUrl(msg));
        Ppt_url = msg;
        Ppt_urlmsgtype = msgtype;
        qDebug()<<"msgtype********:"<<msgtype;
        qDebug()<<"msg***************:"<<msg;

    }

};



#endif // WEBID_H
