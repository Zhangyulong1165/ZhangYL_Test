#include "mydatabase.h"
#include <QtDebug>
MyDataBase::MyDataBase(QObject *parent) : QObject(parent)
{
    if(QSqlDatabase::contains(QSqlDatabase::defaultConnection))
    {
        dbconn = QSqlDatabase::database(QSqlDatabase::defaultConnection);
    }
    else
    {
        dbconn = QSqlDatabase::addDatabase("QMYSQL");
    }
    dbconn.setHostName("127.0.0.1");//主机名字
    dbconn.setDatabaseName("bjpowernode");//数据库名字
    dbconn.open("root", "333"); //第一个参数写用户名，这里我们就写root就可以，第二个参数密码是mysql的登陆密码。
    //可以使用如下语句判断是否连接成功
    if(dbconn.open("root", "333"))
    {
    //如果判断为真，则连接成功
        qDebug()<<"数据库链接成功";
    }
    query = (QSqlQuery)dbconn; //进行绑定 此后可以使用query对象对数据库进行操作。
}


MyDataBase::~MyDataBase()
{
}
