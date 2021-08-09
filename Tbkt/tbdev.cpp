#include "tbdev.h"
#include <QDebug>

TbDev* TbDev::m_staticSelf;
TbDev::TbDev(QObject *parent) : QObject(parent)
{  
    m_staticSelf = this;
}

/*void TbDev::initDev()
{
    TPEDU_SetCallbackAddr(dev_Callback);
    int Init = TPEDU_Init();
    if(Init < 0)
    {
        return;
    }
    char NameList[4096] = {0};
    int EnumDeviceNum = TPEDU_EnumDevices(NameList);
    if(EnumDeviceNum>0)
    {
//qDebug() <<"设备初始化成功!";
    }
    QString devNameList(NameList);
//qDebug() << Init << EnumDeviceNum << NameList;
    QStringList lists = devNameList.split(";");
    foreach (QString str, lists)
    {
       if(str!="")
       {
           devName = str;
           break;
       }
    }

    char *DevName;
    QByteArray ba = devName.toLatin1();
    DevName = ba.data();

//qDebug() << DevName;
    deviceId = TPEDU_OpenDevice(DevName);
    if(deviceId < 0)
    {
//qDebug() << "打开设备失败!";
    }
    else
    {
//qDebug() << "打开设备成功!";
    }


    //添加白名单
    char id[20] = "0340655330";
    int iRet = TPEDU_AddtoWhitelist(deviceId,id,1000);
    if(iRet<0)
    {
//qDebug() << "添加白名单失败!";
    }
}
*/
void TbDev::dev_Callback(int dev, int msg, int param1, void *param2)
{
    if(msg==MSG_PULLEDOUT)
    {
        return;
    }

    char* content = (char *)param2;
    QString contents(content);
    m_staticSelf->revData(contents);
}

void TbDev::revData(QString data)
{
    QString megs = data.remove(0,2);
    QString meg = megs.left(megs.length() - 2);

    QStringList mesgList = meg.split(":");
    QString cardID = mesgList.at(1).mid(1,10);
    QString answer = mesgList.at(4).mid(1,1);



    //qDebug() << "cardID" <<cardID << "answer"<< answer;       
    emit sendData(cardID,answer);
}

int TbDev::setWorkMode(TBModeDef type)
{
 //   initDev();

//    if(deviceId<0)
//    {
//        return 0;
//    }

//    int topictype = 0;
//    char chrTopicType[10] = { 0 };
//    sprintf(chrTopicType, "%d", topictype);

//    TPEDU_SetWorkMode(deviceId,type,chrTopicType,1000);

//    int iRet = TPEDU_Start(deviceId);
//    if(iRet<0)
//    {
////qDebug() << "开始答题失败!";
//    }

    return 1;
}

void TbDev::stopAnswe()
{
//    int iRet = TPEDU_Stop(deviceId);
//    if(iRet>0)
//    {
////qDebug() << "停止答题!";
//    }
}



