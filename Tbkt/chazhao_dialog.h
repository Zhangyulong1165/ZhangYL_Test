#ifndef CHAZHAO_DIALOG_H
#define CHAZHAO_DIALOG_H

#include <QDialog>

namespace Ui {
class chazhao_Dialog;
}

class chazhao_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit chazhao_Dialog(QWidget *parent = nullptr);
    ~chazhao_Dialog();
//    void chahzai_close(); // 查找关闭，
private slots:
    void chahzai_close(); // 查找关闭，
    void set_fankui_showflag_true();   //反馈是否出来
    void set_fankui_showflag_false();  //设置本窗口不再位于最前方

    void set_showflag_true();   //设置本窗口位于最前方
    void set_showflag_false();  //设置本窗口不再位于最前方
    void on_pushButton_close_clicked();

    void wirteValue();

    void on_deleteButton_clicked();

    void on_cancelButton_clicked();

signals:
    void sendChazhaoShow();//  告诉排行，我出来了
    void sendChazhaoClose();  //告诉排行窗口，自己要关闭了，让它重新回到最前
    void firstName(QString);
    void stopSearch();
    void cancel();
protected:
    void closeEvent(QCloseEvent *);
    bool eventFilter(QObject *, QEvent *);   //事件过滤器
private:
    bool fankui_show;
    QString setName;
    bool m_showflag;
    bool m_check_ok;
    Ui::chazhao_Dialog *ui;
};

#endif // CHAZHAO_DIALOG_H
