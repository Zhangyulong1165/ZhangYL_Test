#include "ziyuan_form.h"
#include "ui_ziyuan_form.h"
#include "tbkt_widget.h"
ziyuan_Form::ziyuan_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ziyuan_Form)
{
    ui->setupUi(this);
}

ziyuan_Form::~ziyuan_Form()
{
    delete ui;
}

void ziyuan_Form::on_pushButton_clicked()
{
    this->close();
    tbkt->CloseOffice();
}
