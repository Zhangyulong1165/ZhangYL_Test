#include "irsim.h"
#include "logindialog.h"
#include "mydatabase.h"
#include <QApplication>

//全局声明该类
Irsim *irsim;
MyDataBase *mydatabase;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    irsim = new Irsim;
    mydatabase = new MyDataBase;
    LoginDialog login;
    login.show();
    //    Irsim w;
    //    w.show();
    return a.exec();
}
