#ifndef TBKTCLOSE_DIALOG_H
#define TBKTCLOSE_DIALOG_H

#include <QDialog>
#include "tbkt_widget.h"

namespace Ui {
class tbktclose_Dialog;
}

class tbktclose_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit tbktclose_Dialog(QWidget *parent = nullptr);
    ~tbktclose_Dialog();
signals:

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::tbktclose_Dialog *ui;
    Tbkt_Widget *Tbkt;
};

#endif // TBKTCLOSE_DIALOG_H
