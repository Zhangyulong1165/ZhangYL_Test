#include "thirdtest.h"
#include "ui_thirdtest.h"



ThirdTest::ThirdTest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ThirdTest)
{
    ui->setupUi(this);
    setWindowTitle("线程测试窗口");
    ui->labPic->setPixmap(QPixmap(":/imanges/0.jpg"));
    //connect(ui->pbnThirdstar,&QPushButton::clicked,&mythird,&MyThird::start);
    connect(&mythird,SIGNAL(started()),
            this,SLOT(thirdStar()));
    connect(&mythird,SIGNAL(finished()),
            this,SLOT(thirdFinished()));
    connect(&mythird,SIGNAL(send_values(int,int)),
            this,SLOT(pointnoValuesChange(int,int)));

}

ThirdTest::~ThirdTest()
{
    delete ui;
}
void ThirdTest::closeEvent(QCloseEvent *event)
{
    if(mythird.isRunning()){
        mythird.stopThread();
        mythird.wait();
    }
    event->accept();
}

void ThirdTest::pointnoValuesChange(int cishi, int pointno)
{
    ui->plainTextEdit->appendPlainText(QString::asprintf("第%d的骰子,值是%d",cishi,pointno));
    QPixmap pic;
    pic.load(QString::asprintf(":/imanges/%d.jpg",pointno));
    ui->labPic->setPixmap(pic);
}

void ThirdTest::thirdStar()
{
    ui->labsta->setText("当前线程的状态：启动");
    ui->pbnThirdstar->setEnabled(false);
    ui->pbnstar->setEnabled(true);
    ui->pbnStop->setEnabled(true);
    //ui->pbnClear->setEnabled(true);

}

void ThirdTest::thirdFinished()
{
    ui->labsta->setText("当前线程的状态：停止");
    ui->pbnThirdstar->setEnabled(true);
    ui->pbnstar->setEnabled(false);
    ui->pbnStop->setEnabled(false);
    //ui->pbnClear->setEnabled(false);
}

void ThirdTest::on_pbnThirdstar_clicked()
{
    mythird.start();
}

void ThirdTest::on_pbnstar_clicked()
{
    mythird.mystar();
}

void ThirdTest::on_pbnStop_clicked()
{
    mythird.mystop();
}

void ThirdTest::on_pbnThirdstop_clicked()
{
    mythird.stopThread();
}

void ThirdTest::on_pbnClear_clicked()
{
    ui->plainTextEdit->clear();
}
