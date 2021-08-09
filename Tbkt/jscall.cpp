#include "jscall.h"
#include <QUrl>
#include <QDebug>
JsCall::JsCall(QObject *parent) : QObject(parent)
{
   beikeppt = new BeiKePpt();
   connect(this,SIGNAL(openNotepad(QUrl)), beikeppt,SLOT(pushButton_clicked(QUrl)));
}
void JsCall::jscallme(const QString& msgtype,const QString& msg)
{
    qDebug() << msgtype<< msg;
 //   emit openNotepad(QUrl(msg));
    if (msgtype == "bk")
    {
        emit weikeShow();
    }
    if (msgtype == "wd")
    {
        emit openNotepad(QUrl(msg));
    }
}
