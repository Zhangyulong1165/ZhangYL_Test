//*****关闭窗口的头文件*****//
#ifndef TBKTCLOSE_FORM_H
#define TBKTCLOSE_FORM_H

#include <QWidget>
#include "get_code.h"
namespace Ui {
class tbktclose_Form;
}

class tbktcloseForm : public QWidget
{
    Q_OBJECT

public:
    explicit tbktcloseForm(QWidget *parent = nullptr);
    ~tbktcloseForm();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    get_code code;
    Ui::tbktclose_Form *ui;
};
extern tbktcloseForm *tbktclose;
#endif // TBKTCLOSE_FORM_H
