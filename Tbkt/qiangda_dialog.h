//*****抢答窗口的头文件*****//
#ifndef QIANGDA_DIALOG_H
#define QIANGDA_DIALOG_H

#include <QDialog>
#include <QMovie>
#include <QTimer>
#include "tbdev.h"
namespace Ui {
class qiangda_Dialog;
}

class qiangda_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit qiangda_Dialog(QWidget *parent = nullptr);
    ~qiangda_Dialog();
    void init();
private slots:
    void set_showflag_true();//设置本窗口位于最前方
    void set_showflag_false();
    void on_mytimer_timeout();
    void on_timer_timeout();
    void on_pushButton_guanbi_clicked();

    void on_pushButton_guanbi2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_guanbi3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_biaoyang_clicked();

public slots:
    void revDataMsg(QString cardID,QString answer);
protected:
        void closeEvent(QCloseEvent *);
        bool eventFilter(QObject *, QEvent *);   //事件过滤器
private:
    bool m_showflag;   //用作确认自己是否可以位于最前

    QString cardId;
    QTimer *mytimer;
    QTimer *timer;
    QMovie *movie;
    TbDev *tbdev;
    Ui::qiangda_Dialog *ui;



};

#endif // QIANGDA_DIALOG_H
