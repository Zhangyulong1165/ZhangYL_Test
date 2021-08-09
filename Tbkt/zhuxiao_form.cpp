#include "zhuxiao_form.h"
#include "ui_zhuxiao_form.h"
#include "login_widget.h"

zhuxiao_Form::zhuxiao_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zhuxiao_Form)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);

}
    void zhuxiao_Form::add_tell()
    {
        ui->label_body_tell->setText(login->usertell);
    }

zhuxiao_Form::~zhuxiao_Form()
{
    delete ui;
}

void zhuxiao_Form::on_pbn_zhuxiao_close_clicked()
{
    this->close();
}

void zhuxiao_Form::on_pbn_zhuxiao_clicked()
{

}
