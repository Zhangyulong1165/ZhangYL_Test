//*****倒计时窗口的头文件*****//
#ifndef DAOJISHI_DIALOG_H
#define DAOJISHI_DIALOG_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class daojishi_Dialog;
}

class daojishi_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit daojishi_Dialog(QWidget *parent = nullptr);
    ~daojishi_Dialog();
    void Run(int nStartValue);
    QString TimeMSConvert(int i);
signals:
    void sendDaojishiClose();  //告诉计时窗口，自己要关闭了，让它重新回到最前
private slots:
    void set_showflag_true();   //设置本窗口位于最前方

    void set_showflag_false();  //设置本窗口不再位于最前方
    void on_timer_timeout();
    void on_pushButton_6_clicked();

    void on_pushButton_start_clicked();

    void on_pushButton_quxiao_clicked();

    void on_pushButton_tmp_clicked();

    void on_pushButton_mp_clicked();

    void on_pushButton_tsp_clicked();

    void on_pushButton_sp_clicked();

    void on_pushButton_tmj_clicked();

    void on_pushButton_mj_clicked();

    void on_pushButton_tsj_clicked();

    void on_pushButton_sj_clicked();

protected:
    void closeEvent(QCloseEvent *);
    bool eventFilter(QObject *, QEvent *);   //事件过滤器
private:
        int s = 0;
    bool m_showflag;   //用作确认自己是否可以位于最前
    void btnen(int btn);
    Ui::daojishi_Dialog *ui;
    QTimer *stimer;
    QTimer *mtimer;
    QTimer *htimer;
    QTimer* m_pTimer;
    int m_nStartValue;
    int disply_ts;
    int disply_tm;
    int disply_s;
    int disply_m;
    void initlabel();
};

#endif // DAOJISHI_DIALOG_H
