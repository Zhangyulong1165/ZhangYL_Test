/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *labelShow;
    QFrame *control;
    QVBoxLayout *verticalLayout;
    QPushButton *btnStartShare;
    QPushButton *btnFull;
    QComboBox *comboQuality;
    QLabel *labelFPS;
    QLabel *labelByte;
    QSpacerItem *verticalSpacer;
    QLabel *labelHint;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1009, 586);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelShow = new QLabel(Widget);
        labelShow->setObjectName(QString::fromUtf8("labelShow"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelShow->sizePolicy().hasHeightForWidth());
        labelShow->setSizePolicy(sizePolicy);
        labelShow->setMinimumSize(QSize(100, 0));
        labelShow->setStyleSheet(QString::fromUtf8("border-style:solid;\n"
"border-radius:3px;\n"
"border-width:1px 1px 1px 1px;\n"
"border-color:rgb(0,99,255);\n"
"image:url(:back); "));

        horizontalLayout->addWidget(labelShow);

        control = new QFrame(Widget);
        control->setObjectName(QString::fromUtf8("control"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(control->sizePolicy().hasHeightForWidth());
        control->setSizePolicy(sizePolicy1);
        control->setMinimumSize(QSize(132, 0));
        control->setMaximumSize(QSize(132, 16777215));
        control->setStyleSheet(QString::fromUtf8("border-style:solid;\n"
"border-radius:3px;\n"
"border-width:1px 1px 1px 1px;\n"
"border-color:rgb(0,99,255);"));
        verticalLayout = new QVBoxLayout(control);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, -1, 3, -1);
        btnStartShare = new QPushButton(control);
        btnStartShare->setObjectName(QString::fromUtf8("btnStartShare"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnStartShare->sizePolicy().hasHeightForWidth());
        btnStartShare->setSizePolicy(sizePolicy2);
        btnStartShare->setMinimumSize(QSize(120, 40));
        btnStartShare->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"                                font-family:\"Microsoft Yahei\";\n"
"        border: none;\n"
"                                color: rgb(255,255,255);\n"
"                                background: rgb(56,167,222);\n"
"                                font-size: 19px;				/*14\346\246\234*/\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"        padding-bottom: 2px;\n"
"        background: rgb(66,177,232);\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"        background: rgb(56,167,222);\n"
"}\n"
""));

        verticalLayout->addWidget(btnStartShare);

        btnFull = new QPushButton(control);
        btnFull->setObjectName(QString::fromUtf8("btnFull"));
        sizePolicy2.setHeightForWidth(btnFull->sizePolicy().hasHeightForWidth());
        btnFull->setSizePolicy(sizePolicy2);
        btnFull->setMinimumSize(QSize(120, 40));
        btnFull->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"                                font-family:\"Microsoft Yahei\";\n"
"        border: none;\n"
"                                color: rgb(255,255,255);\n"
"                                background: rgb(56,167,222);\n"
"                                font-size: 16px;				/*14\346\246\234*/\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"        padding-bottom: 2px;\n"
"        background: rgb(66,177,232);\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"        background: rgb(56,167,222);\n"
"}\n"
""));

        verticalLayout->addWidget(btnFull);

        comboQuality = new QComboBox(control);
        comboQuality->addItem(QString());
        comboQuality->addItem(QString());
        comboQuality->addItem(QString());
        comboQuality->setObjectName(QString::fromUtf8("comboQuality"));
        comboQuality->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(comboQuality);

        labelFPS = new QLabel(control);
        labelFPS->setObjectName(QString::fromUtf8("labelFPS"));
        labelFPS->setStyleSheet(QString::fromUtf8("color: rgb(200,20,20);\n"
"font-family:\"Microsoft Yahei\";\n"
"         font-size: 18px;				/*11\346\246\234*/\n"
"border-radius:0px;\n"
"border-width:0px 0px 0px 0px;"));
        labelFPS->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelFPS);

        labelByte = new QLabel(control);
        labelByte->setObjectName(QString::fromUtf8("labelByte"));
        labelByte->setStyleSheet(QString::fromUtf8("color: rgb(200,20,20);\n"
"font-family:\"Microsoft Yahei\";\n"
"         font-size: 18px;				/*11\346\246\234*/\n"
"border-radius:0px;\n"
"border-width:0px 0px 0px 0px;"));
        labelByte->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelByte);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        labelHint = new QLabel(control);
        labelHint->setObjectName(QString::fromUtf8("labelHint"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelHint->sizePolicy().hasHeightForWidth());
        labelHint->setSizePolicy(sizePolicy3);
        labelHint->setMinimumSize(QSize(130, 0));
        labelHint->setMaximumSize(QSize(130, 16777215));
        labelHint->setLayoutDirection(Qt::LeftToRight);
        labelHint->setStyleSheet(QString::fromUtf8("color: rgb(7,62,147);\n"
"font-family:\"Microsoft Yahei\";\n"
"         font-size: 16px;				/*11\346\246\234*/\n"
"\n"
"border-radius:0px;\n"
"border-width:0px 0px 0px 0px;"));
        labelHint->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelHint);


        horizontalLayout->addWidget(control);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        labelShow->setText(QString());
        btnStartShare->setText(QApplication::translate("Widget", "\345\274\200\345\220\257\345\205\261\344\272\253", nullptr));
        btnFull->setText(QApplication::translate("Widget", "\345\205\250\345\261\217(\346\214\211ESC\351\200\200\345\207\272)", nullptr));
        comboQuality->setItemText(0, QApplication::translate("Widget", "\345\217\221\351\200\201\350\264\250\351\207\217\344\275\216", nullptr));
        comboQuality->setItemText(1, QApplication::translate("Widget", "\345\217\221\351\200\201\350\264\250\351\207\217\344\270\255", nullptr));
        comboQuality->setItemText(2, QApplication::translate("Widget", "\345\217\221\351\200\201\350\264\250\351\207\217\351\253\230", nullptr));

        labelFPS->setText(QApplication::translate("Widget", "\345\275\223\345\211\215FPS: 0 ", nullptr));
        labelByte->setText(QApplication::translate("Widget", "\346\257\217\345\270\247: 0KB", nullptr));
        labelHint->setText(QApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\344\270\255...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
