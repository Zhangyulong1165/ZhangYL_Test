#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QTimer>
#include <QLabel>
#include <QSqlQuery>
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();
private slots:
    void on_pbnLogin_clicked();
      //关闭消息提醒
    void closeTips();
private:
    //初始化函数，
    void initDialog();
    //加载数据库
    void addDataBase();

    //登录判断bool
    bool loginIsOk = false;

    //消息提醒定时器
    void labTipShow(QString tips);
    QLabel *labTips;
    QTimer *tipsTimer;
    QSqlQuery *query;
    //关闭消息提醒
private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
