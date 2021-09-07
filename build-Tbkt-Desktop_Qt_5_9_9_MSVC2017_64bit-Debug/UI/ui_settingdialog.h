/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_shengji;
    QPushButton *pushButton_xieyi;
    QPushButton *pushButton_huanban;
    QPushButton *pushButton_huanzhangjie;
    QPushButton *pushButton_zuixiaohua;
    QPushButton *pushButton_tuichu;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QStringLiteral("SettingDialog"));
        SettingDialog->setWindowModality(Qt::NonModal);
        SettingDialog->resize(100, 420);
        SettingDialog->setMinimumSize(QSize(100, 420));
        SettingDialog->setMaximumSize(QSize(100, 420));
        SettingDialog->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingDialog->setWindowIcon(icon);
        SettingDialog->setStyleSheet(QLatin1String("/**/QFrame{background-color:rgb(255,255,255);\n"
"	border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: rgb(200,200,200);\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:rgb(200,200,200);\n"
"    border-radius: 20px;\n"
"\n"
"    background-color: transparent;\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"QPushButton:hover{\n"
"	color: red;\n"
"}\n"
"QPushButton:pressed{\n"
"	color: green;\n"
"}"));
        gridLayout = new QGridLayout(SettingDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(SettingDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_shengji = new QPushButton(frame);
        pushButton_shengji->setObjectName(QStringLiteral("pushButton_shengji"));
        pushButton_shengji->setMinimumSize(QSize(60, 60));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Images/shengji.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_shengji->setIcon(icon1);
        pushButton_shengji->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_shengji, 0, 0, 1, 1);

        pushButton_xieyi = new QPushButton(frame);
        pushButton_xieyi->setObjectName(QStringLiteral("pushButton_xieyi"));
        pushButton_xieyi->setMinimumSize(QSize(60, 60));

        gridLayout_2->addWidget(pushButton_xieyi, 1, 0, 1, 1);

        pushButton_huanban = new QPushButton(frame);
        pushButton_huanban->setObjectName(QStringLiteral("pushButton_huanban"));
        pushButton_huanban->setMinimumSize(QSize(60, 60));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Images/huanban.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_huanban->setIcon(icon2);
        pushButton_huanban->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_huanban, 2, 0, 1, 1);

        pushButton_huanzhangjie = new QPushButton(frame);
        pushButton_huanzhangjie->setObjectName(QStringLiteral("pushButton_huanzhangjie"));
        pushButton_huanzhangjie->setMinimumSize(QSize(60, 60));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Images/huanzhangjie.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_huanzhangjie->setIcon(icon3);
        pushButton_huanzhangjie->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_huanzhangjie, 3, 0, 1, 1);

        pushButton_zuixiaohua = new QPushButton(frame);
        pushButton_zuixiaohua->setObjectName(QStringLiteral("pushButton_zuixiaohua"));
        pushButton_zuixiaohua->setMinimumSize(QSize(60, 60));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Images/zuixiaohua.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_zuixiaohua->setIcon(icon4);
        pushButton_zuixiaohua->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_zuixiaohua, 4, 0, 1, 1);

        pushButton_tuichu = new QPushButton(frame);
        pushButton_tuichu->setObjectName(QStringLiteral("pushButton_tuichu"));
        pushButton_tuichu->setMinimumSize(QSize(60, 60));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/Images/tuichu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_tuichu->setIcon(icon5);
        pushButton_tuichu->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_tuichu, 5, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(SettingDialog);

        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QApplication::translate("SettingDialog", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton_shengji->setText(QString());
        pushButton_xieyi->setText(QString());
        pushButton_huanban->setText(QString());
        pushButton_huanzhangjie->setText(QString());
        pushButton_zuixiaohua->setText(QString());
        pushButton_tuichu->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
