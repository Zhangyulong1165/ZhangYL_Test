#ifndef FANKUIJIEGUO_FORM_H
#define FANKUIJIEGUO_FORM_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class FanKuiJieGuo_Form;
}

class FanKuiJieGuo_Form : public QWidget
{
    Q_OBJECT

signals:
    void fankuiJieguoClose();

public:
    explicit FanKuiJieGuo_Form(QWidget *parent = nullptr);
    ~FanKuiJieGuo_Form();
    void pushbutton_imange_change(int num);// 1人 1;  多人 就是2；全部 就是3，
    void change_text(QString stuname, QString carid, int num); //
    void check_type(int typeID);// 通过1234，控制花的种类，1 为发言积极，2为作业优秀

public:
    QTimer *timer;
private slots:
   void closeUi();

private:
    Ui::FanKuiJieGuo_Form *ui;
};

#endif // FANKUIJIEGUO_FORM_H
