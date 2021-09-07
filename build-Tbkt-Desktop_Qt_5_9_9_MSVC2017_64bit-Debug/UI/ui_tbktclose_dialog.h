/********************************************************************************
** Form generated from reading UI file 'tbktclose_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TBKTCLOSE_DIALOG_H
#define UI_TBKTCLOSE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_tbktclose_Dialog
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *tbktclose_Dialog)
    {
        if (tbktclose_Dialog->objectName().isEmpty())
            tbktclose_Dialog->setObjectName(QStringLiteral("tbktclose_Dialog"));
        tbktclose_Dialog->resize(400, 300);
        tbktclose_Dialog->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgb(255, 255, 255);\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: rgb(255, 255, 255); \n"
"    border-radius: 20px;\n"
"}\n"
"QLabel{\n"
"	font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    /*border-color:rgb(200, 200, 200);*/ \n"
"    border-radius: 20px;\n"
"\n"
"    background-color:rgb(0, 85, 255);\n"
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
""
                        "    subcontrol-origin: padding;\n"
"    right: 10px;\n"
"    top: 15px;\n"
"}"));
        gridLayout_2 = new QGridLayout(tbktclose_Dialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(tbktclose_Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 56, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 55, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 0, 1, 1);

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


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(41, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 4, 2, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(tbktclose_Dialog);

        QMetaObject::connectSlotsByName(tbktclose_Dialog);
    } // setupUi

    void retranslateUi(QDialog *tbktclose_Dialog)
    {
        tbktclose_Dialog->setWindowTitle(QApplication::translate("tbktclose_Dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("tbktclose_Dialog", "      \347\241\256\345\256\232\351\200\200\345\207\272\345\220\227\357\274\237", Q_NULLPTR));
        pushButton->setText(QApplication::translate("tbktclose_Dialog", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("tbktclose_Dialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tbktclose_Dialog: public Ui_tbktclose_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TBKTCLOSE_DIALOG_H
