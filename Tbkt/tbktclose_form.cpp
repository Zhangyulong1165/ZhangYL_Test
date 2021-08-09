#include "tbktclose_form.h"
#include "ui_tbktclose_form.h"
#include "tbkt_widget.h"
#include "login_widget.h"
//#include "get_code.h"
#include <QDebug>
tbktcloseForm::tbktcloseForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tbktclose_Form)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground);
    setWindowFlags(Qt::Tool |Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint|Qt::Dialog);
}

tbktcloseForm::~tbktcloseForm()
{
    delete ui;
}

void tbktcloseForm::on_pushButton_2_clicked()
{
    this->hide();

}

void tbktcloseForm::on_pushButton_clicked()
{
//    delete code;
//    code = new get_code;
    qDebug()<<"******11111******"<<code.user_key;
    code.user_key = "";
    qDebug()<<"******11111******"<<code.user_key;
    this->close();
    tbkt->close();
    delete tbkt;
    tbkt = new Tbkt_Widget;
    login->newUrl = nullptr;
    delete login;
    login = new Login_widget;
    login->show();
    login->updata_erweima();


}
