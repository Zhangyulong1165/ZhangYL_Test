#ifndef TBDEV_H
#define TBDEV_H

#include <QObject>
#include "AnswersCollection.h"

class TbDev : public QObject
{
    Q_OBJECT
public:
    explicit TbDev(QObject *parent = nullptr);


private:
    QString  devName;
    int deviceId;
    static TbDev *m_staticSelf;
private:
//    void initDev();
    static void dev_Callback(int dev, int msg, int param1, void *param2);
    void revData(QString msg);

public:
     int setWorkMode(TBModeDef type);
     void stopAnswe();

signals:
     void sendData(QString,QString);

};

//extern TbDev *tbdev;

#endif // TBDEV_H
