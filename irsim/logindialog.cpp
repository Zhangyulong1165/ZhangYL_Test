#include "logindialog.h"
#include "ui_logindialog.h"
#include "irsim.h"
#include "mydatabase.h"
#include <QFile>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QLabel>
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    initDialog();
    //addDataBase();
    //zhaichao


    labTips = new QLabel(this);
    tipsTimer = new QTimer(this);
    labTips = new QLabel(this);
    //添加qss文件2
    QFile loginqss(":/qss/loginDialog.qss");
    loginqss.open(QFile::ReadOnly);
    this->setStyleSheet(loginqss.readAll());
    loginqss.close();
    connect(ui->pbnClose,&QPushButton::clicked,this,&LoginDialog::close);
    connect(ui->pbnMin,&QPushButton::clicked,this,&LoginDialog::showMinimized);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::initDialog()
{
    //调整头像位置
    //ui->label->mo
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    //setWindowFlags(Qt::WindowStaysOnTopHint);
    setWindowTitle("用户登录");
    ui->pbnLogin->setText("登录");
    ui->lineEditUser->setFocus();
    ui->lineEditUser->setText("zs");
    ui->lineEditPwd->setText("zxc123456");
}

void LoginDialog::addDataBase()
{
    //检测database
    qDebug()<< QSqlDatabase::drivers();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("333");
    db.setDatabaseName("bjpowernode");
    if(!db.open()){
        QMessageBox::warning(this,"warring" ,db.lastError().text());
    }

}

void LoginDialog::labTipShow(QString tips)
{
    labTips->setText(tips);
    labTips->adjustSize();
    labTips->move(this->width()/2 - labTips->width()/2,this->height()/2);
    labTips->setStyleSheet("QLabel{font: 75 10pt Microsoft YaHei;color:#ffffff;}");
    labTips->show();
    tipsTimer->start(2000);
    connect(tipsTimer,SIGNAL(timeout()),this,SLOT(closeTips()));
}

void LoginDialog::on_pbnLogin_clicked()
{
    //qDebug()<<"点击了登录按钮";
    if(ui->lineEditUser->text().isEmpty() || ui->lineEditPwd->text().isEmpty()){
        labTipShow("用户名或者密码不能为空！");
    }
    QString username = ui->lineEditUser->text();
    QString userpwd  = ui->lineEditPwd->text();
    QString S =QString("select username,userpwd from t_user where username='%1' and userpwd = '%2'" ).arg(username).arg(userpwd);
    //    bool lad = query->exec(S) and query->next();
    if(mydatabase->query.exec(S)&&mydatabase->query.next()){
        irsim->showMaximized();
        //隐藏登录窗口
        this->hide();
    }else if(mydatabase->query.exec(S)&&mydatabase->query.next()){
        labTipShow("用户名或者密码不正确！");
    }
}

void LoginDialog::closeTips()
{
    labTips->close();
}
