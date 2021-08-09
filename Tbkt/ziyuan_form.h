#ifndef ZIYUAN_FORM_H
#define ZIYUAN_FORM_H

#include <QWidget>

namespace Ui {
class ziyuan_Form;
}

class ziyuan_Form : public QWidget
{
    Q_OBJECT

public:
    explicit ziyuan_Form(QWidget *parent = nullptr);
    ~ziyuan_Form();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ziyuan_Form *ui;
};

#endif // ZIYUAN_FORM_H
