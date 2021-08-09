//*****画板窗口的头文件*****//
#ifndef HUABAN_FORM_H
#define HUABAN_FORM_H

#include <QWidget>
#include <QMouseEvent>
#include <QCursor>
namespace Ui {
class huaban_Form;
}

class huaban_Form : public QWidget
{
    Q_OBJECT

public:
    explicit huaban_Form(QWidget *parent = nullptr);
    ~huaban_Form();
public:
    void init();
    int i = 0;
signals:
    void sendHuabanClose();
public slots:

private slots:
    void set_showflag_true();   //设置本窗口位于最前方

    void set_showflag_false();  //设置本窗口不再位于最前方
    void on_pushButton_huabanclose_clicked();

    void on_pushButton_huabanright_clicked();

    void on_pushButton_huabanleft_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_heise_clicked();

    void on_pushButton_chengse_clicked();

    void on_pushButton_huangse_clicked();

    void on_pushButton_huise_clicked();

    void on_pushButton_hongse_clicked();

    void on_pushButton_baise_clicked();

    void on_pushButton_lvse_clicked();

    void on_pushButton_lanse_clicked();

    void on_pushButton_qingse_clicked();

    void on_pushButton_fense_clicked();

    void on_huaban_unm_clicked();   //撤销

    void on_huaban_del_clicked();

    void on_huaban_era_clicked();

    void on_huaban_huabi_clicked();
protected:
    void closeEvent(QCloseEvent *);
    bool eventFilter(QObject *, QEvent *);   //事件过滤器
private:
    bool pen;
    QCursor *myCursor;
    bool m_showflag;   //用作确认自己是否可以位于最前
    Ui::huaban_Form *ui;
    int huabandata;
};

#endif // HUABAN_FORM_H
