#ifndef JSCALL_H
#define JSCALL_H

#include <QObject>
#include "beikeppt.h"
//#include <QWebEnginePage>
class JsCall : public QObject
{
    Q_OBJECT
public:
    explicit JsCall(QObject *parent = nullptr);

signals:
    void openNotepad(QUrl msg1);
    void weikeShow();//显示微课；

public slots:
    // 接收前端js发送来的消息
    void jscallme(const QString& msgtype,const QString& msg);
private:
    BeiKePpt *beikeppt;
};

#endif // JSCALL_H
