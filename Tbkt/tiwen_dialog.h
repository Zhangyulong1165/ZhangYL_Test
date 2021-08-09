//*****提问的头文件*****//
#ifndef TIWEN_DIALOG_H
#define TIWEN_DIALOG_H

#include <QDialog>
#include <QTimer>
#include "getusertoken.h"

namespace Ui {
class TiWen_Dialog;
}

class TiWen_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit TiWen_Dialog(QWidget *parent = nullptr);
    ~TiWen_Dialog();
    void init();

private slots:
    void set_showflag_true();   //设置本窗口位于最前方
    void set_showflag_false();  //设置本窗口不再位于最前方
    void on_pushButton_dianming_clicked();
    void on_timer_timeout();

    void on_pushButton_close_clicked();

    void on_pushButton_close_2_clicked();

    void on_pushButton_biaoyang_clicked();

    void on_timer_changeName();

    void on_pushButton_ddianming_clicked();

private:
    QVector<studentMsg> stuInfo;
protected:
    void closeEvent(QCloseEvent *);
    bool eventFilter(QObject *, QEvent *);   //事件过滤器

private:
    bool m_showflag;   //用作确认自己是否可以位于最前
    Ui::TiWen_Dialog *ui;
    QTimer *mytimer;
    QTimer *timer;
    int index;
};

#endif // TIWEN_DIALOG_H
