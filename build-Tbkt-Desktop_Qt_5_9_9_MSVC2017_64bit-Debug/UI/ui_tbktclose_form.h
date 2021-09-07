/********************************************************************************
** Form generated from reading UI file 'tbktclose_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TBKTCLOSE_FORM_H
#define UI_TBKTCLOSE_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tbktclose_Form
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QPushButton *pushButton_xian;

    void setupUi(QWidget *tbktclose_Form)
    {
        if (tbktclose_Form->objectName().isEmpty())
            tbktclose_Form->setObjectName(QStringLiteral("tbktclose_Form"));
        tbktclose_Form->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbktclose_Form->setWindowIcon(icon);
        tbktclose_Form->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgb(255, 255, 255);\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: rgb(255, 255, 255); \n"
"    border-radius: 20px;\n"
"}\n"
"QLabel{\n"
"	font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton#pushButton {\n"
"	font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-radius: 20px;\n"
"\n"
"    background-color:rgb(83, 150, 255);\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"\n"
"QPushButton#pushButton_2 {\n"
"	font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-radius: 20px;\n"
"    background-color:rgb(224, 240, 255);\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover{\n"
"}\n"
"QPushButton#pushButton_2:hover{\n"
"	border-color: rgb(224,"
                        " 240, 255);\n"
"    border-radius: 15px\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: black;\n"
"}\n"
"QPushButton::menu-indicator {\n"
"    image: url(myindicator.png);\n"
"    subcontrol-position: right center;\n"
"    subcontrol-origin: padding;\n"
"    right: 10px;\n"
"    top: 15px;\n"
"}"));
        gridLayout_2 = new QGridLayout(tbktclose_Form);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(tbktclose_Form);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(41, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 5, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(100, 40));
        pushButton->setMaximumSize(QSize(100, 40));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 40));
        pushButton_2->setMaximumSize(QSize(100, 40));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 56, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 55, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 5, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        pushButton_xian = new QPushButton(frame);
        pushButton_xian->setObjectName(QStringLiteral("pushButton_xian"));
        pushButton_xian->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_xian->sizePolicy().hasHeightForWidth());
        pushButton_xian->setSizePolicy(sizePolicy);
        pushButton_xian->setMinimumSize(QSize(0, 1));
        pushButton_xian->setMaximumSize(QSize(16777215, 1));
        pushButton_xian->setStyleSheet(QLatin1String("pushButton_xian{\n"
"  background-color: rgb(135, 135, 135)\n"
"}"));

        gridLayout->addWidget(pushButton_xian, 4, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(tbktclose_Form);

        QMetaObject::connectSlotsByName(tbktclose_Form);
    } // setupUi

    void retranslateUi(QWidget *tbktclose_Form)
    {
        tbktclose_Form->setWindowTitle(QApplication::translate("tbktclose_Form", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton->setText(QApplication::translate("tbktclose_Form", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("tbktclose_Form", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("tbktclose_Form", "      \347\241\256\345\256\232\351\200\200\345\207\272\345\220\227\357\274\237", Q_NULLPTR));
        pushButton_xian->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tbktclose_Form: public Ui_tbktclose_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TBKTCLOSE_FORM_H
