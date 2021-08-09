#include "daojishi_dialog.h"
#include "ui_daojishi_dialog.h"
#include <QtDebug>
#include "tbkt_widget.h"
#pragma execution_character_set("utf-8")
daojishi_Dialog::daojishi_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::daojishi_Dialog)
{
    ui->setupUi(this);
    ui->pushButton_tmj->setEnabled(false);
    ui->pushButton_tsj->setEnabled(false);
    ui->pushButton_sj->setEnabled(false);

    m_showflag = false;
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->installEventFilter(this);
    //    this->setModal(true);
    m_pTimer = new QTimer(this);
    connect(m_pTimer, &QTimer::timeout, this, &daojishi_Dialog::on_timer_timeout);
    m_pTimer->setInterval(1000);
    ui->label_s->setAlignment(Qt::AlignCenter);
    ui->label_m->setAlignment(Qt::AlignCenter);
    ui->label_ts->setAlignment(Qt::AlignCenter);
    ui->label_tm->setAlignment(Qt::AlignCenter);
    initlabel();
}

daojishi_Dialog::~daojishi_Dialog()
{
    delete ui;
}

void daojishi_Dialog::initlabel()
{
    ui->label_tm->setText("0");
    ui->label_m->setText("5");
    ui->label_ts->setText("0");
    ui->label_s->setText("0");

}

void daojishi_Dialog::on_timer_timeout()

{

    if (m_nStartValue <= 0)

    {
        m_pTimer->stop();
        //close();
        return;
    }
    m_nStartValue--;
    qDebug()<<"总秒数"<<m_nStartValue;
    int mm = m_nStartValue/60;    //分钟
    qDebug()<<"mm********"<<mm;
    disply_m = mm%10;
    qDebug()<<"个分数"<<disply_m;
    disply_tm = mm/10;
    qDebug()<<"十分数"<<disply_tm;

    int ss = m_nStartValue%60;    //秒钟
    disply_ts = ss/10;
    qDebug()<<"SS……："<<ss;
    disply_s = ss%10;   //秒钟 *10

    ui->label_s->setText(QString::number(disply_s));
    ui->label_ts->setText(QString::number(disply_ts));
    ui->label_m->setText(QString::number(disply_m));
    ui->label_tm->setText(QString::number(disply_tm));
    //    ui->label_tm->setText(QString::number(disply_tm));


}
void daojishi_Dialog::on_pushButton_6_clicked()
{
    this->close();
}
void daojishi_Dialog::btnen(int btn)
{

    ui->pushButton_tmp->setEnabled(btn);
    ui->pushButton_mp->setEnabled(btn);
    ui->pushButton_tsp->setEnabled(btn);
    ui->pushButton_sp->setEnabled(btn);
    ui->pushButton_tmj->setEnabled(btn);
    ui->pushButton_mj->setEnabled(btn);
    ui->pushButton_tsj->setEnabled(btn);
    ui->pushButton_sj->setEnabled(btn);
}
void daojishi_Dialog::on_pushButton_start_clicked()
{

    if("开始" == ui->pushButton_start->text())
    {
        int ss = ui->label_s->text().toInt();
        int ts = ui->label_ts->text().toInt();
        int tm = ui->label_tm->text().toInt();
        int mm = ui->label_m->text().toInt();
        s = ss + ts * 10 + mm * 60 + tm * 600;
        qDebug()<<"s的值"<<s;


        //        int s = ui->label_s->text().toInt() + ui->label_m->text().toInt() * 60 ;
        Run(s);
        btnen(0);
        ui->pushButton_start->setText("暂停");
        ui->pushButton_quxiao->setText("重新开始");
    }else
    {   btnen(1);
        if( ui->label_tm->text().toInt() == 0)
        {
            qDebug()<<"s*****的值"<<s;
            ui->pushButton_tmj->setEnabled(0);

        }
        if( ui->label_m->text().toInt() == 0)
        {
            qDebug()<<"s*****的值"<<s;
            ui->pushButton_mj->setEnabled(0);
        }
        if( ui->label_ts->text().toInt() == 0)
        {
            qDebug()<<"s*****的值"<<s;
            ui->pushButton_tsj->setEnabled(0);
        }
        if( ui->label_s->text().toInt() == 0)
        {
            qDebug()<<"s*****的值"<<s;
            ui->pushButton_sj->setEnabled(0);
        }



        m_pTimer->stop();

        ui->pushButton_start->setText("开始");
        ui->pushButton_quxiao->setText("取消");
    }
}

void daojishi_Dialog::on_pushButton_quxiao_clicked()
{
    if("取消" == ui->pushButton_quxiao->text())
    {
        this->close();
        initlabel();
        set_showflag_false();  //取消自己位于最前
        tbkt->btn_true();
        tbkt->resetUI();
    }else
    {
        m_pTimer->stop();
        initlabel();
        btnen(1);
        if( ui->label_tm->text().toInt() == 0)
        {
            ui->pushButton_tmj->setEnabled(0);
            ui->pushButton_mj->setEnabled(0);
            ui->pushButton_tsj->setEnabled(0);
            ui->pushButton_sj->setEnabled(0);
            ui->pushButton_mj->setEnabled(true);
            ui->pushButton_start->setText("开始");
            ui->pushButton_quxiao->setText("取消");
        }
    }
}
void daojishi_Dialog::Run(int nStartValue)

{
    m_pTimer->stop();
    m_nStartValue = nStartValue;
    on_timer_timeout();
    m_pTimer->start();
    show();
}

void daojishi_Dialog::set_showflag_true()
{
    m_showflag = true;
    activateWindow();  //使窗口显示到最前方
}

void daojishi_Dialog::set_showflag_false()
{
    m_showflag = false;
}

void daojishi_Dialog::closeEvent(QCloseEvent *)
{
    qDebug() << "倒计时窗口关闭了";
    set_showflag_false();  //不要使自己位于最前
    emit sendDaojishiClose();  //发送消息告诉计时窗口，自己要关闭了，让它回到最前方
    tbkt->btn_true();
    tbkt->resetUI();
}

bool daojishi_Dialog::eventFilter(QObject *obj, QEvent *ev)
{
    if(m_showflag)   //如果此窗口应该是位于最前的
    {
        if(obj == this && ev->type() == QEvent::WindowDeactivate)   //如果本窗口要被遮盖了
        {
            qDebug() << "倒计时窗口将被掩盖，重新拉回最前";
            activateWindow();   //窗口拉回最前
            tbkt->tips_label_text("请关闭倒计时再操作");
            tbkt->btn_false();
        }
    }
    return QWidget::eventFilter(obj, ev);
}

void daojishi_Dialog::on_pushButton_tmp_clicked()
{
    int m3 = ui->label_tm->text().toInt();
    ui->label_tm->setText(QString::number(m3+1));
    if(m3+1 >8 )
    {
        ui->pushButton_tmp->setEnabled(false);
    }else {
        ui->pushButton_tmp->setEnabled(true);
        ui->pushButton_tmj->setEnabled(true);
    }
}

void daojishi_Dialog::on_pushButton_mp_clicked()
{
    int m3 = ui->label_m->text().toInt();
    ui->label_m->setText(QString::number(m3+1));
    if(m3+1 >9 )
    {
        int tm1 = ui->label_tm->text().toInt();
        //        ui->label_tm->setText(QString::number(tm1 +1));
        ui->label_m->setText(QString::number(0));
        ui->pushButton_mj->setEnabled(false);
    }
    else {
        ui->pushButton_mp->setEnabled(true);
        ui->pushButton_mj->setEnabled(true);
    }
}

void daojishi_Dialog::on_pushButton_tsp_clicked()
{
    int m3 = ui->label_ts->text().toInt();
    qDebug()<<"ts"<<m3;
    ui->label_ts->setText(QString::number(m3+1));
    if(m3+1 >5 )
    {
        int tm1 = ui->label_ts->text().toInt();
        //        ui->label_m->setText(QString::number(tm1+1));
        ui->label_ts->setText(QString::number(0));
        ui->pushButton_tsj->setEnabled(false);
    }
    else {
        ui->pushButton_tsp->setEnabled(true);
        ui->pushButton_tsj->setEnabled(true);
    }
}

void daojishi_Dialog::on_pushButton_sp_clicked()
{
    int m3 = ui->label_s->text().toInt();
    qDebug()<<"s"<<m3;
    ui->label_s->setText(QString::number(m3+1));
    if(m3+1 >9 )
    {
        int tm1 = ui->label_s->text().toInt();
        //        ui->label_ts->setText(QString::number(tm1+1));
        ui->label_s->setText(QString::number(0));
        ui->pushButton_sj->setEnabled(false);
    }
    else {
        ui->pushButton_sp->setEnabled(true);
        ui->pushButton_sj->setEnabled(true);
    }
}

void daojishi_Dialog::on_pushButton_tmj_clicked()
{
    int m3 = ui->label_tm->text().toInt();
    qDebug()<<m3;
    ui->label_tm->setText(QString::number(m3-1));
    if(m3 - 1 < 1)
    {
        ui->pushButton_tmj->setEnabled(false);
        ui->pushButton_tmp->setEnabled(true);
    }

}

void daojishi_Dialog::on_pushButton_mj_clicked()
{
    int m3 = ui->label_m->text().toInt();
    qDebug()<<m3;
    ui->label_m->setText(QString::number(m3-1));
    if(m3 - 1 < 1)
    {
        ui->pushButton_mj->setEnabled(false);
        ui->pushButton_mp->setEnabled(true);
    }
}

void daojishi_Dialog::on_pushButton_tsj_clicked()
{
    int m3 = ui->label_ts->text().toInt();
    ui->label_ts->setText(QString::number(m3-1));
    if(m3-1 <1)
    {
        ui->pushButton_tsj->setEnabled(false);
    }
}

void daojishi_Dialog::on_pushButton_sj_clicked()
{
    int m3 = ui->label_s->text().toInt();
    ui->label_s->setText(QString::number(m3-1));
    if(m3-1 <1)
    {
        ui->pushButton_sj->setEnabled(false);
    }
}
