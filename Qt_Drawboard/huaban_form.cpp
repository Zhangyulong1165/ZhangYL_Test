#include "huaban_form.h"
#include "ui_huaban_form.h"
#include <QDebug>
#include <QColorDialog>
//#include "tbkt_widget.h"
#pragma execution_character_set("utf-8")
huaban_Form::huaban_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::huaban_Form)
{
    ui->setupUi(this);
    m_showflag = false;
    pen = true;
    //    setWindowFlags(Qt::Tool |Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint|Qt::Dialog);
    //    setWindowModality(Qt::ApplicationModal);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    ui->pushButton_huabanleft->setEnabled(false);
    this->installEventFilter(this);
    init();
}
huaban_Form::~huaban_Form()
{
    delete ui;
}
void huaban_Form::init()
{
    i = 0;
    ui->stackedWidget->setCurrentIndex(i);
    ui->label->setText("1");
    ui->pushButton_huabanleft->setEnabled(false);
    ui->pushButton_huabanright->setEnabled(true);

}

void huaban_Form::set_showflag_true()
{
    m_showflag = true;
    activateWindow();  //使窗口显示到最前方
}

void huaban_Form::set_showflag_false()
{
    m_showflag = false;
}
//右切换画板页
void huaban_Form::on_pushButton_huabanright_clicked()
{
    ui->pushButton_huabanleft->setEnabled(true);
    ui->stackedWidget->setCurrentIndex(++i%5);
    QString index = QString::number(i+1);
    ui->label->setText(index);
    if (i == 4)
    {
        ui->pushButton_huabanright->setEnabled(false);
        ui->pushButton_huabanright->setStyleSheet("QPushButton{background:/Images/指向-right (1).png}");
    }
    //qDebug() <<"i1:"<< i;
}
//左切换画板页
void huaban_Form::on_pushButton_huabanleft_clicked()
{
    ui->pushButton_huabanright->setEnabled(true);
    if(i>0){
        ui->stackedWidget->setCurrentIndex(--i%5);
        QString index = QString::number(i+1);
        ui->label->setText(index);
        if (i == 0)
        {
            ui->pushButton_huabanleft->setEnabled(false);
            ui->pushButton_huabanleft->setStyleSheet("QPushButton{background:qrc:/Images/指向-left.png}");
            i = 0;
        }
    }
    else{
        //qDebug() <<"页面错误,i:"<< i;
    }
    //qDebug() <<"i2:"<< i;
}
//关闭画板
void huaban_Form::on_pushButton_huabanclose_clicked()
{
    this->close();
    init();
    emit sendHuabanClose();
//    tbkt->btn_true();
}

void huaban_Form::on_pushButton_3_clicked()
{
    ui->page_1->lastpen.setWidth(5);
    ui->page_2->lastpen.setWidth(5);
    ui->page_3->lastpen.setWidth(5);
    ui->page_4->lastpen.setWidth(5);
    ui->page_5->lastpen.setWidth(5);
    //    ui->pushButton_3->setCheckable(true);
}

void huaban_Form::on_pushButton_4_clicked()
{
    ui->page_1->lastpen.setWidth(10);
    ui->page_2->lastpen.setWidth(10);
    ui->page_3->lastpen.setWidth(10);
    ui->page_4->lastpen.setWidth(10);
    ui->page_5->lastpen.setWidth(10);
    //    ui->pushButton_4->setCheckable(true);
}

void huaban_Form::on_pushButton_5_clicked()
{
    ui->page_1->lastpen.setWidth(20);
    ui->page_2->lastpen.setWidth(20);
    ui->page_3->lastpen.setWidth(20);
    ui->page_4->lastpen.setWidth(20);
    ui->page_5->lastpen.setWidth(20);
}

void huaban_Form::on_pushButton_heise_clicked()
{
    if(pen)
    {
    ui->page_1->lastpen.setColor(Qt::black);
    ui->page_2->lastpen.setColor(Qt::black);
    ui->page_3->lastpen.setColor(Qt::black);
    ui->page_4->lastpen.setColor(Qt::black);
    ui->page_5->lastpen.setColor(Qt::black);
    }
    else{return;}
}


void huaban_Form::on_pushButton_chengse_clicked()
{
    if(pen)
    {
    ui->page_1->lastpen.setColor(QColor(255,165,0));
    ui->page_2->lastpen.setColor(QColor(255,165,0));
    ui->page_3->lastpen.setColor(QColor(255,165,0));
    ui->page_4->lastpen.setColor(QColor(255,165,0));
    ui->page_5->lastpen.setColor(QColor(255,165,0));
    }
    else{return;}
}


void huaban_Form::on_pushButton_huangse_clicked()
{
    if(pen)
    {
    ui->page_1->lastpen.setColor(Qt::yellow);
    ui->page_2->lastpen.setColor(Qt::yellow);
    ui->page_3->lastpen.setColor(Qt::yellow);
    ui->page_4->lastpen.setColor(Qt::yellow);
    ui->page_5->lastpen.setColor(Qt::yellow);
    }
    else{return;}
}

void huaban_Form::on_pushButton_huise_clicked()
{
    if(pen)
    {
    ui->page_1->lastpen.setColor(Qt::gray);
    ui->page_2->lastpen.setColor(Qt::gray);
    ui->page_3->lastpen.setColor(Qt::gray);
    ui->page_4->lastpen.setColor(Qt::gray);
    ui->page_5->lastpen.setColor(Qt::gray);
    }
    else{return;}
}

void huaban_Form::on_pushButton_hongse_clicked()
{
    if(pen)
    {
    ui->page_1->lastpen.setColor(Qt::red);
    ui->page_2->lastpen.setColor(Qt::red);
    ui->page_3->lastpen.setColor(Qt::red);
    ui->page_4->lastpen.setColor(Qt::red);
    ui->page_5->lastpen.setColor(Qt::red);
    }
    else{return;}
}

void huaban_Form::on_pushButton_baise_clicked()
{
    if(pen)
    {
    ui->page_1->lastpen.setColor(Qt::white);
    ui->page_2->lastpen.setColor(Qt::white);
    ui->page_3->lastpen.setColor(Qt::white);
    ui->page_4->lastpen.setColor(Qt::white);
    ui->page_5->lastpen.setColor(Qt::white);
    }
    else{return;}
}

void huaban_Form::on_pushButton_lvse_clicked()
{
    if(pen)
    {
    ui->page_1->lastpen.setColor(Qt::green);
    ui->page_2->lastpen.setColor(Qt::green);
    ui->page_3->lastpen.setColor(Qt::green);
    ui->page_4->lastpen.setColor(Qt::green);
    ui->page_5->lastpen.setColor(Qt::green);
    }
    else{return;}
}

void huaban_Form::on_pushButton_lanse_clicked()
{
    if(pen)
    {
    ui->page_1->lastpen.setColor(Qt::blue);
    ui->page_2->lastpen.setColor(Qt::blue);
    ui->page_3->lastpen.setColor(Qt::blue);
    ui->page_4->lastpen.setColor(Qt::blue);
    ui->page_5->lastpen.setColor(Qt::blue);
    }
    else{return;}
}

void huaban_Form::on_pushButton_qingse_clicked()
{
    if(pen)
    {
    ui->page_1->lastpen.setColor(Qt::cyan);
    ui->page_2->lastpen.setColor(Qt::cyan);
    ui->page_3->lastpen.setColor(Qt::cyan);
    ui->page_4->lastpen.setColor(Qt::cyan);
    ui->page_5->lastpen.setColor(Qt::cyan);
    }
    else{return;}
}

void huaban_Form::on_pushButton_fense_clicked()
{
    if(pen)
    {
    ui->page_1->lastpen.setColor(QColor(255, 85, 255));
    ui->page_2->lastpen.setColor(QColor(255, 85, 255));
    ui->page_3->lastpen.setColor(QColor(255, 85, 255));
    ui->page_4->lastpen.setColor(QColor(255, 85, 255));
    ui->page_5->lastpen.setColor(QColor(255, 85, 255));
    }
    else{return;}
}

void huaban_Form::on_huaban_unm_clicked()
{
    if(i == 0)
    {
        qDebug()<<"i的 值："<<i;
        if(!ui->page_1->_lines.isEmpty())
        {
            ui->page_1->_lines.pop_back();
            ui->page_1->pens.pop_back();
            ui->page_1->update();
        }
    }

    else if (i == 1)     {
        qDebug()<<"i的 值："<<i;
        if(!ui->page_2->_lines.isEmpty())
        {
            ui->page_2->_lines.pop_back();
            ui->page_2->pens.pop_back();
            ui->page_2->update();
        }
    }
    else if (i == 2)     {
        qDebug()<<"i的 值："<<i;
        if(!ui->page_3->_lines.isEmpty())
        {
            ui->page_3->_lines.pop_back();
            ui->page_3->pens.pop_back();
            ui->page_3->update();
        }
    }
    else if (i == 3)     {
        qDebug()<<"i的 值："<<i;
        if(!ui->page_4->_lines.isEmpty())
        {
            ui->page_4->_lines.pop_back();
            ui->page_4->pens.pop_back();
            ui->page_4->update();
        }
    }
    else if (i == 4)     {
        qDebug()<<"i的 值："<<i;
        if(!ui->page_5->_lines.isEmpty())
        {
            ui->page_5->_lines.pop_back();
            ui->page_5->pens.pop_back();
            ui->page_5->update();
        }
    }

}

void huaban_Form::on_huaban_del_clicked()
{
    if(i == 0)
    {
        while(!ui->page_1->_lines.empty() || !ui->page_1->pens.empty())
        {
            ui->page_1->_lines.pop_back();
            ui->page_1->pens.pop_back();
            ui->page_1->update();
        }
    }
    else if (i == 1) {
        while(!ui->page_2->_lines.empty() || !ui->page_2->pens.empty())
        {
            ui->page_2->_lines.pop_back();
            ui->page_2->pens.pop_back();
            ui->page_2->update();
        }
    }
    else if (i == 2) {
        while(!ui->page_3->_lines.empty() || !ui->page_3->pens.empty())
        {
            ui->page_3->_lines.pop_back();
            ui->page_3->pens.pop_back();
            ui->page_3->update();
        }
    }
    else if (i == 3) {
        while(!ui->page_4->_lines.empty() || !ui->page_4->pens.empty())
        {
            ui->page_4->_lines.pop_back();
            ui->page_4->pens.pop_back();
            ui->page_4->update();
        }
    }
    else if (i == 4) {
        while(!ui->page_5->_lines.empty() || !ui->page_5->pens.empty())
        {
            ui->page_5->_lines.pop_back();
            ui->page_5->pens.pop_back();
            ui->page_5->update();
        }
    }

}

void huaban_Form::on_huaban_era_clicked()
{
    pen = false;
    ui->page_1->lastpen.setColor(QColor(255, 255, 255,255));
    ui->page_2->lastpen.setColor(QColor(255, 255, 255,255));
    ui->page_3->lastpen.setColor(QColor(255, 255, 255,255));
    ui->page_4->lastpen.setColor(QColor(255, 255, 255,255));
    ui->page_5->lastpen.setColor(QColor(255, 255, 255,255));
    myCursor = new QCursor(QPixmap(":/new/prefix1/Images/era.png"),-1,-1);    //-1,-1表示热点位于图片中心
    this->setCursor(*myCursor);
}

void huaban_Form::on_huaban_huabi_clicked()
{
    pen = true;
    ui->page_1->lastpen.setColor(Qt::black);
    ui->page_2->lastpen.setColor(Qt::black);
    ui->page_3->lastpen.setColor(Qt::black);
    ui->page_4->lastpen.setColor(Qt::black);
    ui->page_5->lastpen.setColor(Qt::black);
    myCursor = new QCursor(QPixmap(":/new/prefix1/Images/pen.png"),-1,-1);    //-1,-1表示热点位于图片中心
    this->setCursor(*myCursor);
}

void huaban_Form::closeEvent(QCloseEvent *)
{
    qDebug() << "画板窗口关闭了 ";
    set_showflag_false();
//    tbkt->btn_true();
//    tbkt->resetUI();
}

bool huaban_Form::eventFilter(QObject *obj, QEvent *ev)
{
    if(m_showflag)   //如果此窗口应该是位于最前的
       {
           if(obj == this && ev->type() == QEvent::WindowDeactivate)   //如果本窗口要被遮盖了
           {
               qDebug() << "画板窗口将被掩盖，重新拉回最前 ";
               activateWindow();   //窗口拉回最前
//               tbkt->tips_label_text("请关闭画板再操作");
//               tbkt->btn_false();
           }
       }
       return QWidget::eventFilter(obj, ev);
}
