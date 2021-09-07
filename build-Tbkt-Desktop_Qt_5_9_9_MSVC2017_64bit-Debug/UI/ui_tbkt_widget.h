/********************************************************************************
** Form generated from reading UI file 'tbkt_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TBKT_WIDGET_H
#define UI_TBKT_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tbkt_Widget
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QWidget *widget_webview;
    QWidget *widget_tbkt_tool;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_beike;
    QPushButton *pushButton_keben;
    QPushButton *pushButton_dianping;
    QPushButton *pushButton_weike;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_tiwen;
    QPushButton *pushButton_jishi;
    QPushButton *pushButton_paihang;
    QPushButton *pushButton_huabi;
    QPushButton *pushButton_huaban;
    QPushButton *pushButton_upan;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_setting;
    QPushButton *pushButton_dianming;
    QPushButton *pushButton_qiangda;
    QPushButton *pushButton_hudong;

    void setupUi(QWidget *Tbkt_Widget)
    {
        if (Tbkt_Widget->objectName().isEmpty())
            Tbkt_Widget->setObjectName(QStringLiteral("Tbkt_Widget"));
        Tbkt_Widget->resize(1920, 1080);
        Tbkt_Widget->setMinimumSize(QSize(0, 1080));
        Tbkt_Widget->setMaximumSize(QSize(1920, 1080));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Tbkt_Widget->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(Tbkt_Widget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Tbkt_Widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(1920, 1080));
        frame->setMaximumSize(QSize(16777215, 1080));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_webview = new QWidget(frame);
        widget_webview->setObjectName(QStringLiteral("widget_webview"));
        widget_webview->setMinimumSize(QSize(1920, 1080));
        widget_webview->setMaximumSize(QSize(1920, 1080));

        gridLayout_2->addWidget(widget_webview, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        widget_tbkt_tool = new QWidget(Tbkt_Widget);
        widget_tbkt_tool->setObjectName(QStringLiteral("widget_tbkt_tool"));
        widget_tbkt_tool->setEnabled(true);
        widget_tbkt_tool->setMinimumSize(QSize(0, 90));
        widget_tbkt_tool->setMaximumSize(QSize(1920, 90));
        widget_tbkt_tool->setStyleSheet(QLatin1String("QWidget#widget_tbkt_tool\n"
"{\n"
"        background:rgb(29,85,208);\n"
"\n"
"}\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    /*border-color:rgb(200, 200, 200);*/\n"
"    border-radius: 20px;\n"
";\n"
"\n"
"    background-color:transparent;\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: url(myindicator.png);\n"
"    subcontrol-position: right center;\n"
"    subcontrol-origin: padding;\n"
"    right: 10px;\n"
"    top: 15px;\n"
"}"));
        gridLayout = new QGridLayout(widget_tbkt_tool);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(209, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 6, 1, 1);

        pushButton = new QPushButton(widget_tbkt_tool);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_beike = new QPushButton(widget_tbkt_tool);
        pushButton_beike->setObjectName(QStringLiteral("pushButton_beike"));
        pushButton_beike->setMinimumSize(QSize(60, 60));
        pushButton_beike->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Images/beike.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_beike->setIcon(icon1);
        pushButton_beike->setIconSize(QSize(55, 55));
        pushButton_beike->setAutoRepeatDelay(200);

        horizontalLayout_2->addWidget(pushButton_beike);

        pushButton_keben = new QPushButton(widget_tbkt_tool);
        pushButton_keben->setObjectName(QStringLiteral("pushButton_keben"));
        pushButton_keben->setMinimumSize(QSize(60, 60));
        pushButton_keben->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Images/keben.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_keben->setIcon(icon2);
        pushButton_keben->setIconSize(QSize(60, 60));
        pushButton_keben->setAutoRepeatDelay(200);

        horizontalLayout_2->addWidget(pushButton_keben);

        pushButton_dianping = new QPushButton(widget_tbkt_tool);
        pushButton_dianping->setObjectName(QStringLiteral("pushButton_dianping"));
        pushButton_dianping->setMinimumSize(QSize(60, 60));
        pushButton_dianping->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Images/dianping.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_dianping->setIcon(icon3);
        pushButton_dianping->setIconSize(QSize(60, 60));
        pushButton_dianping->setAutoRepeatDelay(200);

        horizontalLayout_2->addWidget(pushButton_dianping);

        pushButton_weike = new QPushButton(widget_tbkt_tool);
        pushButton_weike->setObjectName(QStringLiteral("pushButton_weike"));
        pushButton_weike->setMinimumSize(QSize(60, 60));
        pushButton_weike->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Images/weike.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_weike->setIcon(icon4);
        pushButton_weike->setIconSize(QSize(60, 60));
        pushButton_weike->setAutoRepeatDelay(200);

        horizontalLayout_2->addWidget(pushButton_weike);


        gridLayout->addLayout(horizontalLayout_2, 0, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_tiwen = new QPushButton(widget_tbkt_tool);
        pushButton_tiwen->setObjectName(QStringLiteral("pushButton_tiwen"));
        pushButton_tiwen->setMinimumSize(QSize(60, 60));
        pushButton_tiwen->setStyleSheet(QStringLiteral(""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/Images/tiwen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_tiwen->setIcon(icon5);
        pushButton_tiwen->setIconSize(QSize(60, 60));
        pushButton_tiwen->setAutoRepeatDelay(200);

        horizontalLayout_3->addWidget(pushButton_tiwen);

        pushButton_jishi = new QPushButton(widget_tbkt_tool);
        pushButton_jishi->setObjectName(QStringLiteral("pushButton_jishi"));
        pushButton_jishi->setMinimumSize(QSize(60, 60));
        pushButton_jishi->setStyleSheet(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/Images/jishi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_jishi->setIcon(icon6);
        pushButton_jishi->setIconSize(QSize(60, 60));
        pushButton_jishi->setAutoRepeatDelay(200);

        horizontalLayout_3->addWidget(pushButton_jishi);

        pushButton_paihang = new QPushButton(widget_tbkt_tool);
        pushButton_paihang->setObjectName(QStringLiteral("pushButton_paihang"));
        pushButton_paihang->setMinimumSize(QSize(60, 60));
        pushButton_paihang->setStyleSheet(QStringLiteral(""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/Images/paihang.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_paihang->setIcon(icon7);
        pushButton_paihang->setIconSize(QSize(60, 60));
        pushButton_paihang->setAutoRepeatDelay(200);

        horizontalLayout_3->addWidget(pushButton_paihang);

        pushButton_huabi = new QPushButton(widget_tbkt_tool);
        pushButton_huabi->setObjectName(QStringLiteral("pushButton_huabi"));
        pushButton_huabi->setMinimumSize(QSize(60, 60));
        pushButton_huabi->setStyleSheet(QStringLiteral(""));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/Images/huabi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_huabi->setIcon(icon8);
        pushButton_huabi->setIconSize(QSize(60, 60));
        pushButton_huabi->setAutoRepeatDelay(200);

        horizontalLayout_3->addWidget(pushButton_huabi);

        pushButton_huaban = new QPushButton(widget_tbkt_tool);
        pushButton_huaban->setObjectName(QStringLiteral("pushButton_huaban"));
        pushButton_huaban->setMinimumSize(QSize(60, 60));
        pushButton_huaban->setStyleSheet(QStringLiteral(""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/Images/huaban.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_huaban->setIcon(icon9);
        pushButton_huaban->setIconSize(QSize(60, 60));
        pushButton_huaban->setAutoRepeatDelay(200);

        horizontalLayout_3->addWidget(pushButton_huaban);

        pushButton_upan = new QPushButton(widget_tbkt_tool);
        pushButton_upan->setObjectName(QStringLiteral("pushButton_upan"));
        pushButton_upan->setMinimumSize(QSize(60, 60));
        pushButton_upan->setStyleSheet(QStringLiteral(""));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/Images/upan.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_upan->setIcon(icon10);
        pushButton_upan->setIconSize(QSize(60, 60));
        pushButton_upan->setAutoRepeatDelay(200);

        horizontalLayout_3->addWidget(pushButton_upan);


        gridLayout->addLayout(horizontalLayout_3, 0, 7, 1, 1);

        pushButton_2 = new QPushButton(widget_tbkt_tool);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(209, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_setting = new QPushButton(widget_tbkt_tool);
        pushButton_setting->setObjectName(QStringLiteral("pushButton_setting"));
        pushButton_setting->setMinimumSize(QSize(80, 60));
        pushButton_setting->setStyleSheet(QStringLiteral(""));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix1/Images/shezhi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_setting->setIcon(icon11);
        pushButton_setting->setIconSize(QSize(60, 60));
        pushButton_setting->setAutoRepeatDelay(200);

        horizontalLayout->addWidget(pushButton_setting);

        pushButton_dianming = new QPushButton(widget_tbkt_tool);
        pushButton_dianming->setObjectName(QStringLiteral("pushButton_dianming"));
        pushButton_dianming->setMinimumSize(QSize(60, 60));
        pushButton_dianming->setStyleSheet(QStringLiteral(""));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/prefix1/Images/jushoudianming.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_dianming->setIcon(icon12);
        pushButton_dianming->setIconSize(QSize(60, 60));
        pushButton_dianming->setAutoRepeatDelay(200);

        horizontalLayout->addWidget(pushButton_dianming);

        pushButton_qiangda = new QPushButton(widget_tbkt_tool);
        pushButton_qiangda->setObjectName(QStringLiteral("pushButton_qiangda"));
        pushButton_qiangda->setMinimumSize(QSize(60, 60));
        pushButton_qiangda->setStyleSheet(QStringLiteral(""));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/prefix1/Images/quanyuanqiangda.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_qiangda->setIcon(icon13);
        pushButton_qiangda->setIconSize(QSize(60, 60));
        pushButton_qiangda->setAutoRepeatDelay(200);

        horizontalLayout->addWidget(pushButton_qiangda);

        pushButton_hudong = new QPushButton(widget_tbkt_tool);
        pushButton_hudong->setObjectName(QStringLiteral("pushButton_hudong"));
        pushButton_hudong->setMinimumSize(QSize(60, 60));
        pushButton_hudong->setStyleSheet(QStringLiteral(""));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/new/prefix1/Images/hudongdati.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_hudong->setIcon(icon14);
        pushButton_hudong->setIconSize(QSize(60, 60));
        pushButton_hudong->setAutoRepeatDelay(200);

        horizontalLayout->addWidget(pushButton_hudong);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_tbkt_tool, 1, 0, 1, 1);


        retranslateUi(Tbkt_Widget);

        QMetaObject::connectSlotsByName(Tbkt_Widget);
    } // setupUi

    void retranslateUi(QWidget *Tbkt_Widget)
    {
        Tbkt_Widget->setWindowTitle(QApplication::translate("Tbkt_Widget", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Tbkt_Widget", "tips", Q_NULLPTR));
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
        pushButton_2->setText(QApplication::translate("Tbkt_Widget", "biaoyang", Q_NULLPTR));
        pushButton_setting->setText(QString());
        pushButton_dianming->setText(QString());
        pushButton_qiangda->setText(QString());
        pushButton_hudong->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tbkt_Widget: public Ui_Tbkt_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TBKT_WIDGET_H
