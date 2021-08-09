//*****登录窗口的头文件*****//
#ifndef LOGIN_WIDGET_H
#define LOGIN_WIDGET_H
#include <QWidget>
#include <QObject>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QKeyEvent>
#include <QTimer>
#include <QString>
#include <QMovie>
#include "get_code.h"
#include <QLabel>
#include <QWidget>
namespace Ui {
class Login_widget;
}

class Login_widget : public QWidget
{
    Q_OBJECT
public:
    explicit Login_widget(QWidget *parent = 0);
    ~Login_widget();
    QTimer *login_movie_timer; //登陆加载计时器
    QTimer *mytimer;    //二维码显示刷新
    QTimer *codelogintimer;    //登录
    QTimer *pctimer;    //获得key
    QTimer *warning_timer;
    QString code_newUrl;
    QString newUrl;
    QString newtbkt_token;
    QString newuser_id;
    QString Get_Token();
    QString Get_UserUrl();
    QString usertell;
    void open_saomadenglu();
    void updata_erweima();
signals:
    void loginMovie_Show();//显示登陆加载动画信号
    void denglu(QString Url);
private slots:

    void on_pushButton_Login_clicked();     //登录按键槽函数
    void on_pushButton_erweima_clicked();   //扫码刷新
    void on_pushButton_ma_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_login_zxh_clicked();

    void on_pushButton_login_gb_clicked();

    void on_pushButton_matu_clicked();

private slots:
    void warning_timer_timeout();
    void loginMovie_timeout();    //登陆加载……
    void mytimer_timeout();    //定时处理函数
    void pctimer_timeout();
    void codelogintimer_timeout();
    void on_tabWidget_tabBarClicked(int index);
protected:
    void closeEvent(QCloseEvent *);
private:
    QWidget *warning_widget;
    QLabel *warning_label;
    void loginMovieShow();//登陆加载中……
    QMovie *login_movie;
    get_code getcode;
    bool Denglujiance();
    void initWindow();  //登录界面的初始化

    QString JsonToQstring(QJsonObject jsonObject);
    Ui::Login_widget *ui;
    QNetworkAccessManager manger;   //用于http管理的
    QNetworkRequest request;
    void keyPressEvent(QKeyEvent *event);   //回车登录重写
};

extern Login_widget *login;
#endif // LOGIN_WIDGET_H


