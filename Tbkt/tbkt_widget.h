//*****主窗口的头文件*****//
#ifndef TBKT_WIDGET_H
#define TBKT_WIDGET_H

#include <QWidget>
//#include <QWebEngineView>
#include <QMenu>
#include <QAction>
#include <QPoint>
#include <QWebChannel>
//#include <QWebClass>
#include <QTimer>
#include <QLabel>
#include "tiwen_dialog.h"
#include "jishi_form.h"
#include "miaobiao_form.h"
#include "xieyidialog.h"
#include "jushou_dialog.h"
#include "qiangda_dialog.h"
#include "hudong_dialog.h"
#include "dibuform.h"
#include "hudong_dialog.h"
#include "paihang_form.h"
#include "huaban_form.h"
#include "login_widget.h"
#include "tbdev.h"
#include "prepare.h"
#include "huabi_form.h"
#include "WebId.h"
#include "jscall.h"
#include "beikeppt.h"
#include "ziyuan_form.h"
#include <QAxWidget>
#include "zezhao_widget.h"
namespace Ui {
class Tbkt_Widget;
}

class Tbkt_Widget : public QWidget
{
    Q_OBJECT

public:
    QString urlStr;
    //接登录界面的网页地址
    QString nUrl;
    //主窗口的网页
//    QWebEngineView *Tbkt_view;
    QAxWidget *Tbkt_view;
    //    WebClass *webjsobj;
    JsCall *webjsobj;

    //    Login_widget *login;
    explicit Tbkt_Widget(QWidget *parent = 0);
    ~Tbkt_Widget();
signals:
    void sendHuabiOpen();//发送画布打开的信号
    //    void send_setting_show();  //给配置窗口发送信号
    void send_jishi_show(); //给计时窗口发送信号
    void sendHudongShow();  //给互动答题窗口发送信号
    void sendJushouShow();  //给举手点名窗口发送信号
    void sendQiangdaShow(); //给抢答窗口发信号
    void sendTiwenShow(); //给随机提问窗口发信号
    void sendJishiShow(); //给随机提问窗口发信号
    void sendHuabanShow(); //给画板窗口发信号
    void sendPaihangShow();//给排行窗口发信号


public:
    void label_biaoyang_show(); // 更新表扬
    void tips_label_text(QString str); // 提示信息
    void btn_true();
    void btn_false();
    void tips_show(QString form_name); //提示窗；在需要使用的地方添加#include"tbkt_widget.h"***tbkt->tips_show(QString);
    void biaoyang_show();//表扬显示

    //office 操作相关
    void CloseOffice();
    void OpenWord(QString& str);
    void OpenExcel(QString& str);
    void openPpt(QString& str);
    QAxWidget* _excelview;
    QWebChannel *webChannel;
    //QWidget *widget_open;

public slots:
    void openOffice();
    void denglu();
    void open(QString str);
private slots:
    void set_showAWindow_falg_true();   //设置蒙板
    void set_showAWindow_falg_false();  //取消蒙板
    void tipstimer_out();//按提示框的时间
    void label_biaoyang_timer_out();
    void ziyuan_close(); // 关闭资源草
    void weikes();  //微课是否显示
    void doLoad();
    void openSettingWindow();

    void set_Url_change();

    void on_pushButton_upan_clicked();

    void on_pushButton_tiwen_clicked();

    void on_pushButton_jishi_clicked();

    void on_pushButton_beike_clicked();

    void on_pushButton_dianming_clicked();

    void on_pushButton_qiangda_clicked();

    void on_pushButton_hudong_clicked();

    void on_pushButton_paihang_clicked();

    void on_pushButton_keben_clicked();

    void on_pushButton_dianping_clicked();

    void on_pushButton_weike_clicked();

    void on_pushButton_huaban_clicked();

    void on_pushButton_huabi_clicked();

    //    void on_pushButton_clicked();

    void on_pushButton_huabihide_clicked();

    void on_pushButton_clicked();




    void on_pushButton_2_clicked();
protected:
    void closeEvent(QCloseEvent *);



public:
    void showAWindow();
    void resetUI();


private:
    bool paihang_change;
    bool showAWindow_falg;//是否开启蒙板
    QLabel *label_biaoyang;
    QLabel *tips_label;
    QTimer *label_biaoyang_timer;
    QTimer *tipstimer;
    QTimer *ziyuan_timer;
    void init_tbkt_widget();
    int isDigitStr(QString src);    //判断一个字符串是否为纯数字
    void parseURL(QUrl url);
    //    Login_widget login;
    BeiKePpt *beikeppt;
    huaban_Form *huaban; //画板
    huabi_Form *huabi;   //画笔
    //    settingForm *fromsetting;

    //    void focusOutEvent(QFocusEvent *event);
    //    dibuForm *dibu;
    hudong_Dialog *hudong;  //互动答题
    qiangda_Dialog *qiangda;  //全员抢答
    jushou_Dialog *jushou;  //举手点名
    prepare pre;
    //    jishi_Dialog jishi_d;

    xieyiDialog xieyi;  //用户协议
    jishi_Form *jishi; //计时
    QPoint pwd_position;    //屏幕坐标点
    //    SettingDialog *setting;
    TiWen_Dialog *tiwen; // 提问
    TbDev tbDev;    //设备
    paihang_Form *paihang;
    QWidget* mpShadeWindow;
    ziyuan_Form *ziyuan;
    Ui::Tbkt_Widget *ui;
};
extern Tbkt_Widget *tbkt;
#endif // TBKT_WIDGET_H
