/********************************************************************************
** Form generated from reading UI file 'dibuform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIBUFORM_H
#define UI_DIBUFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dibuForm
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_dianming;
    QPushButton *pushButton_qiangda;
    QPushButton *pushButton_hudong;
    QPushButton *pushButton_setting;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_4;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_beike;
    QPushButton *pushButton_keben;
    QPushButton *pushButton_dianping;
    QPushButton *pushButton_weike;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_5;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_tiwen;
    QPushButton *pushButton_jishi;
    QPushButton *pushButton_paihang;
    QPushButton *pushButton_huabi;
    QPushButton *pushButton_huaban;
    QPushButton *pushButton_upan;

    void setupUi(QWidget *dibuForm)
    {
        if (dibuForm->objectName().isEmpty())
            dibuForm->setObjectName(QStringLiteral("dibuForm"));
        dibuForm->resize(1004, 120);
        dibuForm->setMinimumSize(QSize(0, 120));
        dibuForm->setMaximumSize(QSize(16777215, 120));
        gridLayout = new QGridLayout(dibuForm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame_2 = new QFrame(dibuForm);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMaximumSize(QSize(16777215, 100));
        frame_2->setStyleSheet(QLatin1String("QFrame{	\n"
"background-color: transparent;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:rgb(200, 200, 200); \n"
"    border-radius: 20px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget_3 = new QWidget(frame_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(270, 50));
        widget_3->setStyleSheet(QLatin1String("/**/QWidget{background-color:transparent;}\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: rgb(200, 200, 200); \n"
"    border-radius: 20px;\n"
"\n"
"    background-color: transparent;\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"QPushButton:hover{\n"
"	color: red;\n"
"	border-color:rgba(200,200,200,1);\n"
"    background-color:rgba(200,200,200,0.5);\n"
"}\n"
"QPushButton:pressed{\n"
"	color: green;\n"
"	border-color: blueviolet;\n"
"    background-color: black;\n"
"}\n"
"QPushButton::menu-indicator {\n"
"	image:none;\n"
"    subcontrol-position: right center;\n"
"    subcontrol-origin: padding;\n"
"    right: 10px;\n"
"    top: 15px;\n"
"}\n"
""));
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton_dianming = new QPushButton(widget_3);
        pushButton_dianming->setObjectName(QStringLiteral("pushButton_dianming"));
        pushButton_dianming->setMinimumSize(QSize(60, 60));
        pushButton_dianming->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/jushoudianming.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_dianming->setIcon(icon);
        pushButton_dianming->setIconSize(QSize(40, 40));
        pushButton_dianming->setAutoRepeatDelay(200);

        gridLayout_4->addWidget(pushButton_dianming, 0, 1, 1, 1);

        pushButton_qiangda = new QPushButton(widget_3);
        pushButton_qiangda->setObjectName(QStringLiteral("pushButton_qiangda"));
        pushButton_qiangda->setMinimumSize(QSize(60, 60));
        pushButton_qiangda->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Images/quanyuanqiangda.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_qiangda->setIcon(icon1);
        pushButton_qiangda->setIconSize(QSize(40, 40));
        pushButton_qiangda->setAutoRepeatDelay(200);

        gridLayout_4->addWidget(pushButton_qiangda, 0, 2, 1, 1);

        pushButton_hudong = new QPushButton(widget_3);
        pushButton_hudong->setObjectName(QStringLiteral("pushButton_hudong"));
        pushButton_hudong->setMinimumSize(QSize(60, 60));
        pushButton_hudong->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Images/hudongdati.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_hudong->setIcon(icon2);
        pushButton_hudong->setIconSize(QSize(40, 40));
        pushButton_hudong->setAutoRepeatDelay(200);

        gridLayout_4->addWidget(pushButton_hudong, 0, 3, 1, 1);

        pushButton_setting = new QPushButton(widget_3);
        pushButton_setting->setObjectName(QStringLiteral("pushButton_setting"));
        pushButton_setting->setMinimumSize(QSize(60, 60));
        pushButton_setting->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Images/shezhi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_setting->setIcon(icon3);
        pushButton_setting->setIconSize(QSize(50, 50));
        pushButton_setting->setAutoRepeatDelay(200);

        gridLayout_4->addWidget(pushButton_setting, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        widget_4 = new QWidget(frame_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(270, 40));
        widget_4->setStyleSheet(QLatin1String("QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: rgb(200, 200, 200); \n"
"    border-radius: 20px;\n"
"\n"
"    background-color: transparent;\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"QPushButton:hover{\n"
"	color: red;\n"
"	border-color:rgba(200,200,200,1);\n"
"    background-color: rgba(200,200,200,0.5);\n"
"}\n"
"QPushButton:pressed{\n"
"	color: green;\n"
"	border-color: blueviolet;\n"
"    background-color: black;\n"
"}\n"
"QPushButton::menu-indicator {\n"
"    subcontrol-position: right center;\n"
"    subcontrol-origin: padding;\n"
"    right: 10px;\n"
"    top: 15px;\n"
"}"));
        gridLayout_5 = new QGridLayout(widget_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pushButton_beike = new QPushButton(widget_4);
        pushButton_beike->setObjectName(QStringLiteral("pushButton_beike"));
        pushButton_beike->setMinimumSize(QSize(60, 60));
        pushButton_beike->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Images/beike.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_beike->setIcon(icon4);
        pushButton_beike->setIconSize(QSize(40, 40));
        pushButton_beike->setAutoRepeatDelay(200);

        gridLayout_5->addWidget(pushButton_beike, 0, 0, 1, 1);

        pushButton_keben = new QPushButton(widget_4);
        pushButton_keben->setObjectName(QStringLiteral("pushButton_keben"));
        pushButton_keben->setMinimumSize(QSize(60, 60));
        pushButton_keben->setStyleSheet(QStringLiteral(""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/Images/keben.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_keben->setIcon(icon5);
        pushButton_keben->setIconSize(QSize(40, 40));
        pushButton_keben->setAutoRepeatDelay(200);

        gridLayout_5->addWidget(pushButton_keben, 0, 1, 1, 1);

        pushButton_dianping = new QPushButton(widget_4);
        pushButton_dianping->setObjectName(QStringLiteral("pushButton_dianping"));
        pushButton_dianping->setMinimumSize(QSize(60, 60));
        pushButton_dianping->setStyleSheet(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/Images/dianping.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_dianping->setIcon(icon6);
        pushButton_dianping->setIconSize(QSize(40, 40));
        pushButton_dianping->setAutoRepeatDelay(200);

        gridLayout_5->addWidget(pushButton_dianping, 0, 2, 1, 1);

        pushButton_weike = new QPushButton(widget_4);
        pushButton_weike->setObjectName(QStringLiteral("pushButton_weike"));
        pushButton_weike->setMinimumSize(QSize(60, 60));
        pushButton_weike->setStyleSheet(QStringLiteral(""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/Images/weike.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_weike->setIcon(icon7);
        pushButton_weike->setIconSize(QSize(40, 40));
        pushButton_weike->setAutoRepeatDelay(200);

        gridLayout_5->addWidget(pushButton_weike, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget_4, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        widget_5 = new QWidget(frame_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(400, 40));
        widget_5->setStyleSheet(QLatin1String("QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:rgb(200, 200, 200); \n"
"    border-radius: 20px;\n"
"\n"
"    background-color:transparent;\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"QPushButton:hover{\n"
"	color: red;\n"
"	border-color:rgba(200,200,200,1);\n"
"    background-color:rgba(200,200,200,0.5);\n"
"}\n"
"QPushButton:pressed{\n"
"	color: green;\n"
"	border-color: blueviolet;\n"
"    background-color: black;\n"
"}\n"
"QPushButton::menu-indicator {\n"
"    image: url(myindicator.png);\n"
"    subcontrol-position: right center;\n"
"    subcontrol-origin: padding;\n"
"    right: 10px;\n"
"    top: 15px;\n"
"}"));
        gridLayout_6 = new QGridLayout(widget_5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton_tiwen = new QPushButton(widget_5);
        pushButton_tiwen->setObjectName(QStringLiteral("pushButton_tiwen"));
        pushButton_tiwen->setMinimumSize(QSize(60, 60));
        pushButton_tiwen->setStyleSheet(QStringLiteral(""));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/Images/tiwen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_tiwen->setIcon(icon8);
        pushButton_tiwen->setIconSize(QSize(40, 40));
        pushButton_tiwen->setAutoRepeatDelay(200);

        gridLayout_6->addWidget(pushButton_tiwen, 0, 0, 1, 1);

        pushButton_jishi = new QPushButton(widget_5);
        pushButton_jishi->setObjectName(QStringLiteral("pushButton_jishi"));
        pushButton_jishi->setMinimumSize(QSize(60, 60));
        pushButton_jishi->setStyleSheet(QStringLiteral(""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/Images/jishi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_jishi->setIcon(icon9);
        pushButton_jishi->setIconSize(QSize(40, 40));
        pushButton_jishi->setAutoRepeatDelay(200);

        gridLayout_6->addWidget(pushButton_jishi, 0, 1, 1, 1);

        pushButton_paihang = new QPushButton(widget_5);
        pushButton_paihang->setObjectName(QStringLiteral("pushButton_paihang"));
        pushButton_paihang->setMinimumSize(QSize(60, 60));
        pushButton_paihang->setStyleSheet(QStringLiteral(""));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/Images/paihang.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_paihang->setIcon(icon10);
        pushButton_paihang->setIconSize(QSize(40, 40));
        pushButton_paihang->setAutoRepeatDelay(200);

        gridLayout_6->addWidget(pushButton_paihang, 0, 2, 1, 1);

        pushButton_huabi = new QPushButton(widget_5);
        pushButton_huabi->setObjectName(QStringLiteral("pushButton_huabi"));
        pushButton_huabi->setMinimumSize(QSize(60, 60));
        pushButton_huabi->setStyleSheet(QStringLiteral(""));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix1/Images/huabi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_huabi->setIcon(icon11);
        pushButton_huabi->setIconSize(QSize(40, 40));
        pushButton_huabi->setAutoRepeatDelay(200);

        gridLayout_6->addWidget(pushButton_huabi, 0, 3, 1, 1);

        pushButton_huaban = new QPushButton(widget_5);
        pushButton_huaban->setObjectName(QStringLiteral("pushButton_huaban"));
        pushButton_huaban->setMinimumSize(QSize(60, 60));
        pushButton_huaban->setStyleSheet(QStringLiteral(""));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/prefix1/Images/huaban.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_huaban->setIcon(icon12);
        pushButton_huaban->setIconSize(QSize(40, 40));
        pushButton_huaban->setAutoRepeatDelay(200);

        gridLayout_6->addWidget(pushButton_huaban, 0, 4, 1, 1);

        pushButton_upan = new QPushButton(widget_5);
        pushButton_upan->setObjectName(QStringLiteral("pushButton_upan"));
        pushButton_upan->setMinimumSize(QSize(60, 60));
        pushButton_upan->setStyleSheet(QStringLiteral(""));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/prefix1/Images/upan.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_upan->setIcon(icon13);
        pushButton_upan->setIconSize(QSize(40, 40));
        pushButton_upan->setAutoRepeatDelay(200);

        gridLayout_6->addWidget(pushButton_upan, 0, 5, 1, 1);


        gridLayout_2->addWidget(widget_5, 0, 4, 1, 1);


        gridLayout->addWidget(frame_2, 0, 0, 1, 1);


        retranslateUi(dibuForm);

        QMetaObject::connectSlotsByName(dibuForm);
    } // setupUi

    void retranslateUi(QWidget *dibuForm)
    {
        dibuForm->setWindowTitle(QApplication::translate("dibuForm", "Form", Q_NULLPTR));
        pushButton_dianming->setText(QString());
        pushButton_qiangda->setText(QString());
        pushButton_hudong->setText(QString());
        pushButton_setting->setText(QString());
        pushButton_beike->setText(QString());
        pushButton_keben->setText(QString());
        pushButton_dianping->setText(QString());
        pushButton_weike->setText(QString());
        pushButton_tiwen->setText(QString());
        pushButton_jishi->setText(QString());
        pushButton_paihang->setText(QString());
        pushButton_huabi->setText(QString());
        pushButton_huaban->setText(QString());
        pushButton_upan->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dibuForm: public Ui_dibuForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIBUFORM_H
