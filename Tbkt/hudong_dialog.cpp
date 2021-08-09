#include "hudong_dialog.h"
#include "ui_hudong_dialog.h"
#include "add_flower.h"
#include "tbkt_widget.h"
#include <QDebug>
#pragma execution_character_set("utf-8")
hudong_Dialog::hudong_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hudong_Dialog)
{
    ui->setupUi(this);
    this->installEventFilter(this);
    m_hudongshow =false;
    m_ansshow = true;
    m_check_flag = false;
    ui->stackedWidget_2->setCurrentWidget(ui->stackedWidgetPage1);
    ans = new set_ansForm();
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    //    this->setModal(true);
    msTimer= new QTimer(this);  //this说明是当前类对象的定时器
    countTemp=0;
    secondTemp=0;
    minuteTemp=0;
    hourTemp=0;
    tbdev = NULL;
    connect(this, SIGNAL(sendAnsShow()), ans, SLOT(set_showflag_true()));  //连接，使答题分析窗口位于在最前
    connect(ans, SIGNAL(sendAnsClose()), this, SLOT(set_showflag_true()));   //答题分析窗口关闭了，自己重新回到最前
    connect(ans, SIGNAL(ansCancel()), this, SLOT(set_check_flag_false()));
    connect(ans,SIGNAL(ansCancel()),this,SLOT(set_showansflag_true()));
    connect(ans,SIGNAL(ansCancel()),this,SLOT(set_check_change_btn2()));
    connect(ans, SIGNAL(sendCheckAns()), this, SLOT(set_check_flag_true()));
    connect(ans, SIGNAL(sendCheckAns()), this, SLOT(set_check_change_btn()));


    //  connect(ans,SIGNAL(ans(QString)),this,&hudong_Dialog::fenxi);
    connect(ans,SIGNAL(ans(QString)),this,SLOT(fenxi(QString)));
    ui->stu_list->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->stu_list->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->stu_list->setFocusPolicy(Qt::NoFocus);
    ui->stu_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->stu_list->setColumnCount(3);
    ui->stu_list->setFont(QFont("微软雅黑", 17));



    ui->rightTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->rightTable->setFocusPolicy(Qt::NoFocus);
    ui->rightTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->rightTable->setColumnCount(3);
    ui->rightTable->setFont(QFont("微软雅黑", 17));

    ui->errorTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->errorTable->setFocusPolicy(Qt::NoFocus);
    ui->errorTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->errorTable->setColumnCount(3);
    ui->errorTable->setFont(QFont("微软雅黑", 17));


    ui->invalidTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->invalidTable->setFocusPolicy(Qt::NoFocus);
    ui->invalidTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->invalidTable->setColumnCount(3);
    ui->invalidTable->setFont(QFont("微软雅黑", 17));
    // ui->pushButton_hudongchouti->setStyleSheet("QPushButton{border-image:url(:/new/prefix1/Images/指向-right.png);}");
    ui->pushButton_hudongchouti->setIcon(QIcon(":/new/prefix1/Images/指向-right.png"));
    ui->pushButton_hudongchouti->setIconSize(QSize(30,30)); //设置图片大小
    init();
}

hudong_Dialog::~hudong_Dialog()
{
    delete ui;
}
void hudong_Dialog::fenxi(QString answer)
{
    ui->stackedWidget_2->setCurrentWidget(ui->hdpg_ansfenxi);
    ui->pushButton_ans_fenxi->setText("答题结果");
    isDisplayFx = 1;

    rightStu.clear();
    errorStu.clear();
    int rightPeople = 0;
    int errorPeople = 0;
    //对错分析结果
    for(int i=0;i<stuInfo.size();i++)
    {
        if(answer==stuInfo.at(i).answer)
        {
            rightStu.append(stuInfo.at(i).stu_name);
            rightPeople++;
        }
        else
        {
            errorStu.append(stuInfo.at(i).stu_name);
            errorPeople++;
        }
    }

    allVec.clear();
    for(int i=0;i<allStu.size();i++)
    {
        allVec.append(allStu.at(i).stu_name);
    }

    for(int i=0;i<stuInfo.size();i++)
    {
        int index = allVec.indexOf(stuInfo.at(i).stu_name);
        if(index>=0)
        {
            allVec.remove(index);
            continue;
        }
    }

    ui->rightPeople->setText(QString("(%1)人").arg(rightPeople));
    ui->errorPeople->setText(QString("(%1)人").arg(errorPeople));
    ui->invalidPeople->setText(QString("(%1)人").arg(allStu.size() - stuInfo.size()));
    if(rightStu.size()>0)
    {
        displayTableWidget(ui->rightTable,rightStu);
    }

    if(errorStu.size()>0)
    {
        displayTableWidget(ui->errorTable,errorStu);
    }

    if(allVec.size()>0)
    {
        displayTableWidget(ui->invalidTable,allVec);
    }

}

void hudong_Dialog::displayTableWidget(QTableWidget *tableWidget, QVector<QString> &vector)
{
    int row = vector.size()/3;
    tableWidget->setRowCount(row+1);
    int index = 0;
    int isBreak = 0;
    for (int i = 0;i< row+1; i++)
    {
        tableWidget->setRowHeight(i,40);
        for (int j = 0;j<3;j++)
        {
            setItemData(tableWidget,i,j,vector.at(index));
            index++;
            if(index==vector.size())
            {
                isBreak = 1;
                break;
            }
        }
        if(isBreak==1)
        {
            break;
        }
    }
}


void hudong_Dialog::init()
{
    ui->stackedWidget_2->setCurrentWidget(ui->hdpg_username);
    ui->label_m->setText("0");
    ui->label_s->setText("00");
    ui->progressBarA->setValue(0);
    ui->progressBarB->setValue(0);
    ui->progressBarC->setValue(0);
    ui->progressBarD->setValue(0);
    ui->progressBarE->setValue(0);
    ui->progressBarF->setValue(0);
    ui->progressBarNO->setValue(100);

}
void hudong_Dialog::StartStopwatch()
{
    msTimer->setInterval(30); //10ms
    msTimer->start();
    connect(msTimer,SIGNAL(timeout()),this,SLOT(TimeSlot()));
}
void hudong_Dialog::SetStrLength(QString *str, int length)
{
    if(str->length()<length)
    {
        str->insert(0,"0");
    }
}

void hudong_Dialog::initDev()
{
    if(tbdev)
    {
        delete tbdev;
    }
    tbdev = new TbDev;
    connect(tbdev,SIGNAL(sendData(QString,QString)),this,SLOT(revDataMsg(QString,QString)));

    TBModeDef type = TB_MODE_SINGLE;
    int ret = tbdev->setWorkMode(type);
    if( ret == 0)
    {
        tbkt->tips_label_text("未找到答题设备");
    }
    getusertoken->GetUserClassInfo();
    QVector<studentMsg> stuInfo = getusertoken->stuMsg;
    allStu = stuInfo;
    allStuInfo = stuInfo;
    stuNum = stuInfo.size();
    QString stu = QString::number(stuNum);
    ui->allStu->setText(stu);

    ui->stackedWidget_2->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(0);
    ui->stu_list->clearContents();
    stuMap.clear();
    stuInfo.clear();
    stuCardIds.clear();
    isDisplayFx = 0;
    ui->answerStu->setText("0");
    ui->errorTable->clearContents();
    ui->rightTable->clearContents();
    ui->invalidTable->clearContents();



    ui->progressBarA->setMaximum(stuNum);
    ui->progressBarA->setMinimum(0);
    ui->progressBarA->setValue(0);
    double progressBarA = (ui->progressBarA->value() - ui->progressBarA->minimum()) * 100.0/ (ui->progressBarA->maximum() - ui->progressBarA->minimum());
    ui->progressBarA->setFormat(QString::number(0) + tr("人（%1%）").arg(QString::number(progressBarA, 'f', 1)));

    ui->progressBarB->setFormat(QString::number(0) + tr("人（%1%）").arg(QString::number(0, 'f',0)));
    ui->progressBarC->setFormat(QString::number(0) + tr("人（%1%）").arg(QString::number(0, 'f',0)));
    ui->progressBarD->setFormat(QString::number(0) + tr("人（%1%）").arg(QString::number(0, 'f',0)));
    ui->progressBarE->setFormat(QString::number(0) + tr("人（%1%）").arg(QString::number(0, 'f',0)));
    ui->progressBarF->setFormat(QString::number(0) + tr("人（%1%）").arg(QString::number(0, 'f',0)));
    ui->progressBarNO->setFormat(QString::number(stuNum) + tr("人（%1%）").arg(QString::number(100, 'f',0)));

    ui->praiseButton->setEnabled(false);
    ui->pushButton_ans_fenxi->setEnabled(false);


}

void hudong_Dialog::revDataMsg(QString cardID, QString answer)
{
    qDebug() << "cardID" <<cardID << "answer"<< answer;

    //    getusertoken->GetUserClassInfo();
    //    QVector<studentMsg> stuInfo = getusertoken->stuMsg;
    int i;
    for(i = 0;i<allStuInfo.size();i++)
    {
        if(cardID==allStuInfo.at(i).card_id)
        {
            QString stu_name =allStuInfo.at(i).stu_name;
            stuMap.insert(stu_name,answer);
            if(stuMap.size()>0)
            {
                updateStuInfo();
                QString answerStu = QString::number(stuMap.size());
                ui->answerStu->setText(answerStu);
            }
            break;
        }
    }

}

void hudong_Dialog::closeEvent(QCloseEvent *)
{
    qDebug() << "互动答题窗口关闭了";
    set_showflag_false();
    set_showansflag_true();
    tbkt->resetUI();
    tbkt->btn_true();
    ans->init();
    ui->pushButton_ans_fenxi->setText("答题结果");
    ui->stackedWidget_2->setCurrentWidget(ui->hdpg_username);
//        delete ui;

}

bool hudong_Dialog::eventFilter(QObject *obj, QEvent *ev)
{
    if(m_showflag)   //如果此窗口应该是位于最前的
    {
        if(obj == this && ev->type() == QEvent::WindowDeactivate)   //如果本窗口要被遮盖了
        {
            qDebug() << "互动窗口将被掩盖，重新拉回最前";
            activateWindow();   //窗口拉回最前
            tbkt->tips_label_text("请关闭互动答题后，再进行其他操作");
            tbkt->btn_false();
        }
    }
    return QWidget::eventFilter(obj, ev);

}

void hudong_Dialog::updateStuInfo()
{
    ui->praiseButton->setEnabled(true);
    ui->pushButton_ans_fenxi->setEnabled(true);


    //stuInfo 答题的人数
    stuInfo.clear();
    QMap<QString, QString>::iterator iter = stuMap.begin();
    while (iter != stuMap.end())
    {
        studentAnswer stuAnswer;
        stuAnswer.stu_name = iter.key();
        stuAnswer.answer = iter.value();
        stuInfo.append(stuAnswer);
        iter++;
    }

    int row = stuInfo.size()/3;
    ui->stu_list->setRowCount(row+1);
    int index = 0;
    int isBreak = 0;
    for (int i = 0;i< row+1; i++)
    {
        //zhangxj 设置行高5.28
        ui->stu_list->setRowHeight(i,40);
        for (int j = 0;j<3;j++)
        {
            setItemData(ui->stu_list,i,j,stuInfo.at(index).stu_name);
            index++;
            if(index==stuInfo.size())
            {
                isBreak = 1;
                break;
            }
        }
        if(isBreak==1)
        {
            break;
        }
    }
}

void hudong_Dialog::setItemData(QTableWidget *tableWidget, int x, int y, QString str)
{
    tableWidget->setItem(x,y,new QTableWidgetItem(str));
    tableWidget->item(x,y)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    tableWidget->item(x,y)->setTextColor(QColor(51,51,51));
}


void hudong_Dialog::StopStopwatch()
{
    msTimer->stop();
}

void hudong_Dialog::set_hudongshow_true()
{
    m_hudongshow = true;
}

void hudong_Dialog::set_hudongshow_false()
{
    m_hudongshow = false;
}
void hudong_Dialog::TimeSlot()
{
    countTemp+=1;
    if(countTemp==100)
    {
        countTemp=0;
        secondTemp+=1;
        if(secondTemp==60)
        {
            secondTemp=0;
            minuteTemp+=1;
            if(minuteTemp==60)
            {
                minuteTemp=0;
                hourTemp+=1;
                if(hourTemp==24)
                {
                    hourTemp=0;
                }
            }
        }
    }

    //把整数转换成字符串
    QString minutestr = QString::number(minuteTemp);
    QString secondstr = QString::number(secondTemp);
    //设置字符串的长度为2
    SetStrLength(&minutestr,2);
    SetStrLength(&secondstr,2);
    Display(minutestr,secondstr);
}

void hudong_Dialog::set_check_change_btn2()
{
        ui->pushButton_ans_fenxi->setText("答题结果");
}

void hudong_Dialog::set_check_change_btn()
{
    ui->pushButton_ans_fenxi->setText("答题分析");
}

void hudong_Dialog::set_check_flag_true()
{
    m_check_flag = true;
}

void hudong_Dialog::set_check_flag_false()
{
    m_check_flag = false;
}

void hudong_Dialog::set_showansflag_true()
{
    m_ansshow = true;
}

void hudong_Dialog::set_showansflag_false()
{
    m_ansshow = false;
}

void hudong_Dialog::set_showflag_true()
{
    m_showflag = true;
    activateWindow();  //使窗口显示到最前方
}

void hudong_Dialog::set_showflag_false()
{
    m_showflag = false;
}
void hudong_Dialog::Display(QString minute, QString second)
{
    ui->label_m->setText(minute);
    ui->label_s->setText(second);
}
void hudong_Dialog::ResetStopwatch()
{
    msTimer->stop();
    ui->label_m->setText("00");
    ui->label_s->setText("00");
    countTemp=0;
    secondTemp=0;
    minuteTemp=0;

}
void hudong_Dialog::on_pushButton_hudong_close_clicked()
{
    ui->stackedWidget_2->setCurrentWidget(ui->hdpg_username);
    ResetStopwatch();

    if(tbdev)
    {
        tbdev->stopAnswe();
        delete tbdev;
        tbdev = NULL;
    }
    this->close();
    set_showflag_false();
    tbkt->btn_true();
    tbkt->resetUI();
    m_check_flag = false;

}

void hudong_Dialog::on_pushButton_stopans_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page);
    ui->stackedWidget_2->setCurrentWidget(ui->hdpg_stopans);
    if(tbdev)
    {
        tbdev->stopAnswe();
    }
    msTimer->stop();

    if(stuInfo.size()==0)
    {
        return;
    }

    //答案分析
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int E = 0;
    int F = 0;

    for (int i = 0;i< stuInfo.size();i++)
    {
        QString answer = stuInfo.at(i).answer;
        if(answer=="A")
        {
            A=A+1;
        }
        else if(answer=="B")
        {
            B=B+1;
        }
        else if(answer=="C")
        {
            C=C+1;
        }
        else if(answer=="D")
        {
            D=D+1;
        }
        else if(answer=="E")
        {
            E=E+1;
        }
        else if(answer=="F")
        {
            F=F+1;
        }
    }

    ui->progressBarA->setMaximum(stuNum);
    ui->progressBarA->setMinimum(0);
    ui->progressBarA->setValue(A);
    double progressBarA = (ui->progressBarA->value() - ui->progressBarA->minimum()) * 100.0/ (ui->progressBarA->maximum() - ui->progressBarA->minimum());
    ui->progressBarA->setFormat(QString::number(A) + tr("人（%1%）").arg(QString::number(progressBarA, 'f', 1)));

    ui->progressBarB->setMaximum(stuNum);
    ui->progressBarB->setMinimum(0);
    ui->progressBarB->setValue(B);
    double progressBarB = (ui->progressBarB->value() - ui->progressBarB->minimum()) * 100.0/ (ui->progressBarB->maximum() - ui->progressBarB->minimum());
    ui->progressBarB->setFormat(QString::number(B) + tr("人（%1%）").arg(QString::number(progressBarB, 'f', 1)));

    ui->progressBarC->setMaximum(stuNum);
    ui->progressBarC->setMinimum(0);
    ui->progressBarC->setValue(C);
    double progressBarC = (ui->progressBarC->value() - ui->progressBarC->minimum()) * 100.0/ (ui->progressBarC->maximum() - ui->progressBarC->minimum());
    ui->progressBarC->setFormat(QString::number(C) + tr("人（%1%）").arg(QString::number(progressBarC, 'f', 1)));

    ui->progressBarD->setMaximum(stuNum);
    ui->progressBarD->setMinimum(0);
    ui->progressBarD->setValue(D);
    double progressBarD = (ui->progressBarD->value() - ui->progressBarD->minimum()) * 100.0/ (ui->progressBarD->maximum() - ui->progressBarD->minimum());
    ui->progressBarD->setFormat(QString::number(D) + tr("人（%1%）").arg(QString::number(progressBarD, 'f', 1)));

    ui->progressBarE->setMaximum(stuNum);
    ui->progressBarE->setMinimum(0);
    ui->progressBarE->setValue(E);
    double progressBarE = (ui->progressBarE->value() - ui->progressBarE->minimum()) * 100.0/ (ui->progressBarE->maximum() - ui->progressBarE->minimum());
    ui->progressBarE->setFormat(QString::number(E) + tr("人（%1%）").arg(QString::number(progressBarE, 'f', 1)));

    ui->progressBarF->setMaximum(stuNum);
    ui->progressBarF->setMinimum(0);
    ui->progressBarF->setValue(F);
    double progressBarF = (ui->progressBarF->value() - ui->progressBarF->minimum()) * 100.0/ (ui->progressBarF->maximum() - ui->progressBarF->minimum());
    ui->progressBarF->setFormat(QString::number(F) + tr("人（%1%）").arg(QString::number(progressBarF, 'f', 1)));

    ui->progressBarNO->setMaximum(stuNum);
    ui->progressBarNO->setMinimum(0);
    ui->progressBarNO->setValue(stuNum-stuInfo.size());
    double progressBarNO = (ui->progressBarNO->value() - ui->progressBarNO->minimum()) * 100.0/ (ui->progressBarNO->maximum() - ui->progressBarNO->minimum());
    ui->progressBarNO->setFormat(QString::number(stuNum-stuInfo.size()) + tr("人（%1%）").arg(QString::number(progressBarNO, 'f', 1)));

}

void hudong_Dialog::on_pushButton_ans_fenxi_clicked()
{
    set_showflag_false();

    if(ui->pushButton_ans_fenxi->text()=="答题结果")
    {
        if(m_ansshow)
        {
            ans->show();
            emit sendAnsShow();
            set_showansflag_false();
        }

        if(m_check_flag)
        {
            qDebug()<<"答题结果的check"<<m_check_flag<<endl;
            ui->stackedWidget_2->setCurrentWidget(ui->hdpg_ansfenxi);
            ui->pushButton_ans_fenxi->setText("答题分析");
        }
    }
    else if(ui->pushButton_ans_fenxi->text()=="答题分析")
    {
        qDebug()<<"*答题分析********************************"<<m_check_flag<<endl;
        if(m_check_flag)
        {
            ui->stackedWidget_2->setCurrentWidget(ui->hdpg_stopans);
            ui->pushButton_ans_fenxi->setText("答题结果");
            set_check_flag_true();
        }


    }
}

void hudong_Dialog::on_pushButton_hudong_close_2_clicked()
{
    on_pushButton_hudong_close_clicked();
    init();
    ui->stackedWidget_2->setCurrentWidget(ui->hdpg_username);

}

void hudong_Dialog::on_praiseButton_clicked()
{
    for(int i=0;i<stuInfo.size();i++)
    {
        QString stuName = stuInfo.at(i).stu_name;
        for(int j = 0;j< allStuInfo.size();j++)
        {
            if(stuName==allStuInfo.at(j).stu_name)
            {
                QString card_id = allStuInfo.at(j).card_id;
                stuCardIds.append(card_id);
                break;
            }
        }
    }

    QString carIdList;
    for(int i = 0;i < stuCardIds.size();i++)
    {
        QString carId = stuCardIds.at(i);
        if(i==stuCardIds.size()-1)
        {
            carIdList = carIdList+carId;
        }
        else
        {
            carIdList = carIdList+carId+",";
        }
    }

    Add_flower::getInstance()->addFlower(carIdList,1,"");
    tbkt->label_biaoyang_show();
}

void hudong_Dialog::on_pushButton_hudongchouti_clicked()
{
    if(m_hudongshow)
    {
        ui->frame->setVisible(m_hudongshow);
        ui->pushButton_hudongchouti->setVisible(true);
        ui->pushButton_hudongchouti->setIcon(QIcon(":/new/prefix1/Images/指向-right.png"));
        ui->pushButton_hudongchouti->setIconSize(QSize(30,30)); //设置图片大小
        set_hudongshow_false();
    }
    else {
        ui->frame->setVisible(m_hudongshow);
        ui->pushButton_hudongchouti->setVisible(true);
        set_hudongshow_true();
        ui->pushButton_hudongchouti->setIcon(QIcon(":/new/prefix1/Images/指向-left.png"));
        ui->pushButton_hudongchouti->setIconSize(QSize(30,30)); //设置图片大小
        //左指
    }
}

