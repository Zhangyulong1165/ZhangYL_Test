//*****计时窗口的头文件*****//
#ifndef JISHI_FORM_H
#define JISHI_FORM_H

#include <QWidget>
#include "daojishi_dialog.h"
#include "miaobiao_form.h"

namespace Ui {
class jishi_Form;
}

class jishi_Form : public QWidget
{
    Q_OBJECT

public:
    explicit jishi_Form(QWidget *parent = nullptr);
    ~jishi_Form();
signals:

    void sendDaojishiShow();  //告诉倒计时弹窗，你需要位于最前方
    void sendMiaobiaoShow();  //告诉秒表弹窗，你需要位于最前方
private slots:
    void set_showflag_true();   //设置本窗口位于最前方
    void set_showflag_false();  //设置本窗口不再位于最前方

    //    void set_showflag_jishi_true();   //设置本窗口位于最前方
    void on_pushButton_daojishi_clicked();

    void on_pushButton_miaobiao_clicked();
protected:
    void closeEvent(QCloseEvent *);
    bool eventFilter(QObject *, QEvent *);   //事件过滤器
private:
    bool m_showflag;   //用作确认自己是否可以位于最前
    Ui::jishi_Form *ui;
    QPoint pwd_position;
    miaobiao_Form *miaobiao;
    daojishi_Dialog *daojishi;
};

#endif // JISHI_FORM_H
