#include "fankuijieguo_form.h"
#include "ui_fankuijieguo_form.h"
#include "add_flower.h"
#pragma execution_character_set("utf-8")
FanKuiJieGuo_Form::FanKuiJieGuo_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FanKuiJieGuo_Form)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    timer = new QTimer(this);
    timer->start(3000);
    connect(timer, SIGNAL(timeout()), this, SLOT(closeUi()));
}
void FanKuiJieGuo_Form::pushbutton_imange_change(int mun)
{
    ui->pushButton_stuimange ->setIcon(QIcon(nullptr));

    if(1 == mun)
    {
        ui->pushButton_stuimange ->setIcon(QIcon(":/new/prefix1/Images/stu1.png"));
        ui->pushButton_stuimange->setIconSize(QSize(100,100));

    }
    else if(2 == mun)
    {
        ui->pushButton_stuimange ->setIcon(QIcon(":/new/prefix1/Images/stu2.png"));
        ui->pushButton_stuimange->setIconSize(QSize(100,100));

    }
    else if(3 == mun)
    {
        ui->pushButton_stuimange ->setIcon(QIcon(":/new/prefix1/Images/stu3.png"));
        ui->pushButton_stuimange->setIconSize(QSize(100,100));
    }


}

void FanKuiJieGuo_Form::change_text(QString stuname,QString stuId,int num)
{
    ui->label_stuname->setText(NULL);
    ui->label_stuname->setText(stuname);
    ui->label_f->setText("+"+QString::number(num));
    Add_flower::getInstance()->addFlower("",num,stuId);

}

void FanKuiJieGuo_Form::check_type(int typeID)
{
    ui->label_f_type->setText(nullptr);
    if(1 == typeID)
    {
     ui->label_f_type->setText("发言积极");
     ui->pushButton_type->setIcon(QIcon(":/new/prefix1/Images/1.png"));
     ui->pushButton_type->setIconSize(QSize(100,100));
    }
    else if(2 == typeID)
    {
        ui->label_f_type->setText("作业优秀");
        ui->pushButton_type->setIcon(QIcon(":/new/prefix1/Images/2.png"));
        ui->pushButton_type->setIconSize(QSize(100,100));
    }
    else if(3 == typeID)
    {
        ui->label_f_type->setText("积极思考");
        ui->pushButton_type->setIcon(QIcon(":/new/prefix1/Images/3.png"));
        ui->pushButton_type->setIconSize(QSize(100,100));
    }
    else if(4 == typeID)
    {
        ui->label_f_type->setText("团结合作");
        ui->pushButton_type->setIcon(QIcon(":/new/prefix1/Images/4.png"));
        ui->pushButton_type->setIconSize(QSize(100,100));
    }

}

void FanKuiJieGuo_Form::closeUi()
{
    timer->stop();
    this->close();
    emit fankuiJieguoClose();
}

FanKuiJieGuo_Form::~FanKuiJieGuo_Form()
{
    delete ui;
}
