#include "tbkt_widget.h"
#include <QApplication>
#include "login_widget.h"
#include "tiwen_dialog.h"
#include "jishi_form.h"
#include "settingdialog.h"
#include "daojishi_dialog.h"
#include "miaobiao_form.h"
#include "xieyidialog.h"
#include "dibuform.h"
#include "hudong_dialog.h"
#include "paihang_form.h"
#include "huaban_form.h"
#include "huabi_form.h"
#include "tbktclose_form.h"
#include "settingform.h"
#include "shengji_form.h"
#include "huabi_form.h"
#include "getusertoken.h"
#include "set_ansform.h"
#include "get_code.h"
//#include "tbdev.h"
//tbktcloseForm *tbktclose;
GetUserToken *getusertoken;
Login_widget *login;
Tbkt_Widget *tbkt;
settingForm *setting;
tbktcloseForm *tbktclose;
//get_code *code;
//TbDev *tbdev;
//Login_widget *login;
int main(int argc, char *argv[])
{
//    tbktclose = new tbktcloseForm();

    QApplication a(argc, argv);
    QFile qss(":/stylesheet.qss");
    qss.open(QFile::ReadOnly);
    qApp->setStyleSheet(qss.readAll());
    login = new Login_widget;
    getusertoken = new GetUserToken;
    tbkt = new Tbkt_Widget;
    setting = new settingForm;
    tbktclose = new tbktcloseForm;
    get_code code;
    //tbdev = new TbDev;

    shengji_Form shengji;
    huabi_Form huabi;
//    set_ansForm set_a;
//    Login_widget login;
//    huabi.showFullScreen();
//    shengji.show();
//    login = new Login_widget();
    daojishi_Dialog daojishi;
//    SettingDialog setting;
//    jishi_Form jishi;
//    TiWen_Dialog dia;
//    Tbkt_Widget w;
//    miaobiao_Form miaobiao;
//    xieyiDialog xieyi;
//    dibuForm dibu;
    hudong_Dialog hudong;
    paihang_Form paihang;
//    huaban_Form huaban;
//    tbktcloseForm tb;

//    tbkt->showFullScreen();
//    tb.show();
//    huaban.show();
//    paihang.show();

//    hudong.show();
//    dibu.showMaximized();
    //xieyi.show();
    //miaobiao.show();
//    daojishi.show();
    //setting.show();
    //jishi.show();
    //dia.show();
//    w.showFullScreen();
//    w.showMaximized();
//    set_a.show();
//    login->show();
    code.GetUserClassInfo("code_key");
    login->show();
//fanj.show();
    return a.exec();
}
