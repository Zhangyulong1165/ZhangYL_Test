/********************************************************************************
** Form generated from reading UI file 'jishi_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JISHI_FORM_H
#define UI_JISHI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jishi_Form
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *pushButton_daojishi;
    QPushButton *pushButton_miaobiao;

    void setupUi(QWidget *jishi_Form)
    {
        if (jishi_Form->objectName().isEmpty())
            jishi_Form->setObjectName(QStringLiteral("jishi_Form"));
        jishi_Form->resize(120, 200);
        jishi_Form->setMinimumSize(QSize(100, 200));
        jishi_Form->setMaximumSize(QSize(120, 200));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        jishi_Form->setWindowIcon(icon);
        jishi_Form->setStyleSheet(QLatin1String("QFrame{\n"
"background-color:rgb(255,255,255);\n"
"	border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: rgb(200,200,200);\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
" \n"
"    border-radius: 20px;\n"
"    background-color: transparent;\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"\n"
" border-radius: 10px;\n"
""));
        gridLayout_2 = new QGridLayout(jishi_Form);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(jishi_Form);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_daojishi = new QPushButton(frame);
        pushButton_daojishi->setObjectName(QStringLiteral("pushButton_daojishi"));
        pushButton_daojishi->setMinimumSize(QSize(60, 60));
        pushButton_daojishi->setMaximumSize(QSize(80, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Images/daojishi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_daojishi->setIcon(icon1);
        pushButton_daojishi->setIconSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_daojishi, 0, 0, 1, 1);

        pushButton_miaobiao = new QPushButton(frame);
        pushButton_miaobiao->setObjectName(QStringLiteral("pushButton_miaobiao"));
        pushButton_miaobiao->setMinimumSize(QSize(60, 60));
        pushButton_miaobiao->setMaximumSize(QSize(80, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Images/miaobiao.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_miaobiao->setIcon(icon2);
        pushButton_miaobiao->setIconSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_miaobiao, 1, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(jishi_Form);

        QMetaObject::connectSlotsByName(jishi_Form);
    } // setupUi

    void retranslateUi(QWidget *jishi_Form)
    {
        jishi_Form->setWindowTitle(QApplication::translate("jishi_Form", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton_daojishi->setText(QString());
        pushButton_miaobiao->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class jishi_Form: public Ui_jishi_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JISHI_FORM_H
