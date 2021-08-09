#include "tbktclose_dialog.h"
#include "ui_tbktclose_dialog.h"

tbktclose_Dialog::tbktclose_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tbktclose_Dialog)
{
    ui->setupUi(this);
        this->setModal(true);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    connect(this, SIGNAL(send_setting_show()), Tbkt, SLOT(set_showflag_true()));
}

tbktclose_Dialog::~tbktclose_Dialog()
{
    delete ui;
}

void tbktclose_Dialog::on_pushButton_2_clicked()
{
    this->close();
}

void tbktclose_Dialog::on_pushButton_clicked()
{
    this->close();

}
