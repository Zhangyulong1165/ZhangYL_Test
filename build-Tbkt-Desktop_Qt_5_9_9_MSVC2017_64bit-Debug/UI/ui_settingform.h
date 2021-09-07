/********************************************************************************
** Form generated from reading UI file 'settingform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGFORM_H
#define UI_SETTINGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingForm
{
public:
    QFrame *frame;
    QPushButton *pushButton_xieyi;
    QPushButton *pushButton_huanban;
    QPushButton *pushButton_huanzhangjie;
    QPushButton *pushButton_zuixiaohua;
    QPushButton *pushButton_tuichu;
    QPushButton *pushButton_shengji;

    void setupUi(QWidget *settingForm)
    {
        if (settingForm->objectName().isEmpty())
            settingForm->setObjectName(QStringLiteral("settingForm"));
        settingForm->resize(62, 541);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingForm->setWindowIcon(icon);
        settingForm->setStyleSheet(QLatin1String("QWidget{\n"
"    background-color:rgb(255,255,255);\n"
"	border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: rgb(255,255,255);\n"
"    border-radius: 20px;\n"
"}\n"
"QFrame{\n"
"   \n"
"}\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"   /* border-color:rgb(200,200,200);*/\n"
"    border-radius: 20px;\n"
"\n"
"    background-color: transparent;\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"QPushButton:hover{\n"
"}\n"
"QPushButton:pressed{\n"
"	color: rgb(170, 0, 0);\n"
"}"));
        frame = new QFrame(settingForm);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 61, 541));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_xieyi = new QPushButton(frame);
        pushButton_xieyi->setObjectName(QStringLiteral("pushButton_xieyi"));
        pushButton_xieyi->setGeometry(QRect(0, 110, 60, 60));
        pushButton_xieyi->setMinimumSize(QSize(60, 60));
        pushButton_xieyi->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/Images/xieyi.png);"));
        pushButton_huanban = new QPushButton(frame);
        pushButton_huanban->setObjectName(QStringLiteral("pushButton_huanban"));
        pushButton_huanban->setGeometry(QRect(0, 190, 60, 60));
        pushButton_huanban->setMinimumSize(QSize(60, 60));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Images/huanban.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_huanban->setIcon(icon1);
        pushButton_huanban->setIconSize(QSize(50, 50));
        pushButton_huanzhangjie = new QPushButton(frame);
        pushButton_huanzhangjie->setObjectName(QStringLiteral("pushButton_huanzhangjie"));
        pushButton_huanzhangjie->setGeometry(QRect(0, 280, 60, 60));
        pushButton_huanzhangjie->setMinimumSize(QSize(60, 60));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Images/huanzhangjie.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_huanzhangjie->setIcon(icon2);
        pushButton_huanzhangjie->setIconSize(QSize(50, 50));
        pushButton_zuixiaohua = new QPushButton(frame);
        pushButton_zuixiaohua->setObjectName(QStringLiteral("pushButton_zuixiaohua"));
        pushButton_zuixiaohua->setGeometry(QRect(0, 370, 60, 60));
        pushButton_zuixiaohua->setMinimumSize(QSize(60, 60));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Images/zuixiaohua.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_zuixiaohua->setIcon(icon3);
        pushButton_zuixiaohua->setIconSize(QSize(50, 50));
        pushButton_tuichu = new QPushButton(frame);
        pushButton_tuichu->setObjectName(QStringLiteral("pushButton_tuichu"));
        pushButton_tuichu->setGeometry(QRect(0, 460, 60, 60));
        pushButton_tuichu->setMinimumSize(QSize(60, 60));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Images/tuichu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_tuichu->setIcon(icon4);
        pushButton_tuichu->setIconSize(QSize(50, 50));
        pushButton_shengji = new QPushButton(frame);
        pushButton_shengji->setObjectName(QStringLiteral("pushButton_shengji"));
        pushButton_shengji->setEnabled(true);
        pushButton_shengji->setGeometry(QRect(0, 30, 60, 60));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_shengji->sizePolicy().hasHeightForWidth());
        pushButton_shengji->setSizePolicy(sizePolicy);
        pushButton_shengji->setMinimumSize(QSize(60, 60));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/Images/shengji.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_shengji->setIcon(icon5);
        pushButton_shengji->setIconSize(QSize(50, 50));

        retranslateUi(settingForm);

        QMetaObject::connectSlotsByName(settingForm);
    } // setupUi

    void retranslateUi(QWidget *settingForm)
    {
        settingForm->setWindowTitle(QApplication::translate("settingForm", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton_xieyi->setText(QString());
        pushButton_huanban->setText(QString());
        pushButton_huanzhangjie->setText(QString());
        pushButton_zuixiaohua->setText(QString());
        pushButton_tuichu->setText(QString());
        pushButton_shengji->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class settingForm: public Ui_settingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGFORM_H
