/********************************************************************************
** Form generated from reading UI file 'chazhao_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAZHAO_DIALOG_H
#define UI_CHAZHAO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_chazhao_Dialog
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonA;
    QPushButton *pushButtonB;
    QPushButton *pushButtonC;
    QPushButton *pushButtonD;
    QPushButton *pushButtonE;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonF;
    QPushButton *pushButtonG;
    QPushButton *pushButtonH;
    QPushButton *pushButtonI;
    QPushButton *pushButtonJ;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonK;
    QPushButton *pushButtonL;
    QPushButton *pushButtonM;
    QPushButton *pushButtonN;
    QPushButton *pushButtonO;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonP;
    QPushButton *pushButtonQ;
    QPushButton *pushButtonR;
    QPushButton *pushButtonS;
    QPushButton *pushButtonT;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonU;
    QPushButton *pushButtonV;
    QPushButton *pushButtonW;
    QPushButton *pushButtonX;
    QPushButton *pushButtonY;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonZ;
    QPushButton *cancelButton;
    QPushButton *deleteButton;
    QPushButton *pushButton_close;

    void setupUi(QDialog *chazhao_Dialog)
    {
        if (chazhao_Dialog->objectName().isEmpty())
            chazhao_Dialog->setObjectName(QStringLiteral("chazhao_Dialog"));
        chazhao_Dialog->resize(420, 520);
        chazhao_Dialog->setMinimumSize(QSize(420, 520));
        chazhao_Dialog->setMaximumSize(QSize(420, 520));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        chazhao_Dialog->setWindowIcon(icon);
        chazhao_Dialog->setStyleSheet(QString::fromUtf8("QFrame#frame\n"
"{\n"
"	border-radius:10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:#999999;\n"
"    border-radius: 20px;\n"
"	color:#999999;\n"
"	\n"
"	font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-color:rgb(255,255,255);\n"
"    background-repeat: no-repeat;\n"
"    background-position:center;\n"
"}\n"
"QPushButton:hover{\n"
"	color:#ffffff;\n"
"	border-color:rgba(200,200,200,1);\n"
"    background-color:rgba(200,200,200,0.5);\n"
"}\n"
""));
        frame = new QFrame(chazhao_Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 400, 500));
        frame->setMinimumSize(QSize(400, 500));
        frame->setMaximumSize(QSize(400, 500));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 40));
        lineEdit->setMaximumSize(QSize(16777215, 40));
        lineEdit->setStyleSheet(QString::fromUtf8("color:#5396FF;\n"
"font: 26pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:none;\n"
"border-bottom:1px solid;\n"
"border-bottom-color: rgb(222, 222, 222);\n"
""));
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonA = new QPushButton(frame);
        pushButtonA->setObjectName(QStringLiteral("pushButtonA"));
        pushButtonA->setMinimumSize(QSize(40, 40));
        pushButtonA->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButtonA);

        pushButtonB = new QPushButton(frame);
        pushButtonB->setObjectName(QStringLiteral("pushButtonB"));
        pushButtonB->setMinimumSize(QSize(40, 40));
        pushButtonB->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButtonB);

        pushButtonC = new QPushButton(frame);
        pushButtonC->setObjectName(QStringLiteral("pushButtonC"));
        pushButtonC->setMinimumSize(QSize(40, 40));
        pushButtonC->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButtonC);

        pushButtonD = new QPushButton(frame);
        pushButtonD->setObjectName(QStringLiteral("pushButtonD"));
        pushButtonD->setMinimumSize(QSize(40, 40));
        pushButtonD->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButtonD);

        pushButtonE = new QPushButton(frame);
        pushButtonE->setObjectName(QStringLiteral("pushButtonE"));
        pushButtonE->setMinimumSize(QSize(40, 40));
        pushButtonE->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButtonE);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonF = new QPushButton(frame);
        pushButtonF->setObjectName(QStringLiteral("pushButtonF"));
        pushButtonF->setMinimumSize(QSize(40, 40));
        pushButtonF->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButtonF);

        pushButtonG = new QPushButton(frame);
        pushButtonG->setObjectName(QStringLiteral("pushButtonG"));
        pushButtonG->setMinimumSize(QSize(40, 40));
        pushButtonG->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButtonG);

        pushButtonH = new QPushButton(frame);
        pushButtonH->setObjectName(QStringLiteral("pushButtonH"));
        pushButtonH->setMinimumSize(QSize(40, 40));
        pushButtonH->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButtonH);

        pushButtonI = new QPushButton(frame);
        pushButtonI->setObjectName(QStringLiteral("pushButtonI"));
        pushButtonI->setMinimumSize(QSize(40, 40));
        pushButtonI->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButtonI);

        pushButtonJ = new QPushButton(frame);
        pushButtonJ->setObjectName(QStringLiteral("pushButtonJ"));
        pushButtonJ->setMinimumSize(QSize(40, 40));
        pushButtonJ->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButtonJ);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonK = new QPushButton(frame);
        pushButtonK->setObjectName(QStringLiteral("pushButtonK"));
        pushButtonK->setMinimumSize(QSize(40, 40));
        pushButtonK->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(pushButtonK);

        pushButtonL = new QPushButton(frame);
        pushButtonL->setObjectName(QStringLiteral("pushButtonL"));
        pushButtonL->setMinimumSize(QSize(40, 40));
        pushButtonL->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(pushButtonL);

        pushButtonM = new QPushButton(frame);
        pushButtonM->setObjectName(QStringLiteral("pushButtonM"));
        pushButtonM->setMinimumSize(QSize(40, 40));
        pushButtonM->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(pushButtonM);

        pushButtonN = new QPushButton(frame);
        pushButtonN->setObjectName(QStringLiteral("pushButtonN"));
        pushButtonN->setMinimumSize(QSize(40, 40));
        pushButtonN->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(pushButtonN);

        pushButtonO = new QPushButton(frame);
        pushButtonO->setObjectName(QStringLiteral("pushButtonO"));
        pushButtonO->setMinimumSize(QSize(40, 40));
        pushButtonO->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(pushButtonO);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButtonP = new QPushButton(frame);
        pushButtonP->setObjectName(QStringLiteral("pushButtonP"));
        pushButtonP->setMinimumSize(QSize(40, 40));
        pushButtonP->setMaximumSize(QSize(40, 40));

        horizontalLayout_4->addWidget(pushButtonP);

        pushButtonQ = new QPushButton(frame);
        pushButtonQ->setObjectName(QStringLiteral("pushButtonQ"));
        pushButtonQ->setMinimumSize(QSize(40, 40));
        pushButtonQ->setMaximumSize(QSize(40, 40));

        horizontalLayout_4->addWidget(pushButtonQ);

        pushButtonR = new QPushButton(frame);
        pushButtonR->setObjectName(QStringLiteral("pushButtonR"));
        pushButtonR->setMinimumSize(QSize(40, 40));
        pushButtonR->setMaximumSize(QSize(40, 40));

        horizontalLayout_4->addWidget(pushButtonR);

        pushButtonS = new QPushButton(frame);
        pushButtonS->setObjectName(QStringLiteral("pushButtonS"));
        pushButtonS->setMinimumSize(QSize(40, 40));
        pushButtonS->setMaximumSize(QSize(40, 40));

        horizontalLayout_4->addWidget(pushButtonS);

        pushButtonT = new QPushButton(frame);
        pushButtonT->setObjectName(QStringLiteral("pushButtonT"));
        pushButtonT->setMinimumSize(QSize(40, 40));
        pushButtonT->setMaximumSize(QSize(40, 40));

        horizontalLayout_4->addWidget(pushButtonT);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButtonU = new QPushButton(frame);
        pushButtonU->setObjectName(QStringLiteral("pushButtonU"));
        pushButtonU->setMinimumSize(QSize(40, 40));
        pushButtonU->setMaximumSize(QSize(40, 40));

        horizontalLayout_5->addWidget(pushButtonU);

        pushButtonV = new QPushButton(frame);
        pushButtonV->setObjectName(QStringLiteral("pushButtonV"));
        pushButtonV->setMinimumSize(QSize(40, 40));
        pushButtonV->setMaximumSize(QSize(40, 40));

        horizontalLayout_5->addWidget(pushButtonV);

        pushButtonW = new QPushButton(frame);
        pushButtonW->setObjectName(QStringLiteral("pushButtonW"));
        pushButtonW->setMinimumSize(QSize(40, 40));
        pushButtonW->setMaximumSize(QSize(40, 40));

        horizontalLayout_5->addWidget(pushButtonW);

        pushButtonX = new QPushButton(frame);
        pushButtonX->setObjectName(QStringLiteral("pushButtonX"));
        pushButtonX->setMinimumSize(QSize(40, 40));
        pushButtonX->setMaximumSize(QSize(40, 40));

        horizontalLayout_5->addWidget(pushButtonX);

        pushButtonY = new QPushButton(frame);
        pushButtonY->setObjectName(QStringLiteral("pushButtonY"));
        pushButtonY->setMinimumSize(QSize(40, 40));
        pushButtonY->setMaximumSize(QSize(40, 40));

        horizontalLayout_5->addWidget(pushButtonY);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButtonZ = new QPushButton(frame);
        pushButtonZ->setObjectName(QStringLiteral("pushButtonZ"));
        pushButtonZ->setMinimumSize(QSize(40, 40));
        pushButtonZ->setMaximumSize(QSize(40, 40));

        horizontalLayout_6->addWidget(pushButtonZ);

        cancelButton = new QPushButton(frame);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMinimumSize(QSize(40, 40));
        cancelButton->setMaximumSize(QSize(40, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/Images/27\346\222\244\351\224\200.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon1);

        horizontalLayout_6->addWidget(cancelButton);

        deleteButton = new QPushButton(frame);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setMinimumSize(QSize(40, 40));
        deleteButton->setMaximumSize(QSize(40, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Images/\345\210\240 \351\231\244.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);

        horizontalLayout_6->addWidget(deleteButton);

        pushButton_close = new QPushButton(frame);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setMinimumSize(QSize(80, 40));
        pushButton_close->setMaximumSize(QSize(40, 40));

        horizontalLayout_6->addWidget(pushButton_close);


        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 3);


        retranslateUi(chazhao_Dialog);

        QMetaObject::connectSlotsByName(chazhao_Dialog);
    } // setupUi

    void retranslateUi(QDialog *chazhao_Dialog)
    {
        chazhao_Dialog->setWindowTitle(QApplication::translate("chazhao_Dialog", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButtonA->setText(QApplication::translate("chazhao_Dialog", "A", Q_NULLPTR));
        pushButtonB->setText(QApplication::translate("chazhao_Dialog", "B", Q_NULLPTR));
        pushButtonC->setText(QApplication::translate("chazhao_Dialog", "C", Q_NULLPTR));
        pushButtonD->setText(QApplication::translate("chazhao_Dialog", "D", Q_NULLPTR));
        pushButtonE->setText(QApplication::translate("chazhao_Dialog", "E", Q_NULLPTR));
        pushButtonF->setText(QApplication::translate("chazhao_Dialog", "F", Q_NULLPTR));
        pushButtonG->setText(QApplication::translate("chazhao_Dialog", "G", Q_NULLPTR));
        pushButtonH->setText(QApplication::translate("chazhao_Dialog", "H", Q_NULLPTR));
        pushButtonI->setText(QApplication::translate("chazhao_Dialog", "I", Q_NULLPTR));
        pushButtonJ->setText(QApplication::translate("chazhao_Dialog", "J", Q_NULLPTR));
        pushButtonK->setText(QApplication::translate("chazhao_Dialog", "K", Q_NULLPTR));
        pushButtonL->setText(QApplication::translate("chazhao_Dialog", "L", Q_NULLPTR));
        pushButtonM->setText(QApplication::translate("chazhao_Dialog", "M", Q_NULLPTR));
        pushButtonN->setText(QApplication::translate("chazhao_Dialog", "N", Q_NULLPTR));
        pushButtonO->setText(QApplication::translate("chazhao_Dialog", "O", Q_NULLPTR));
        pushButtonP->setText(QApplication::translate("chazhao_Dialog", "P", Q_NULLPTR));
        pushButtonQ->setText(QApplication::translate("chazhao_Dialog", "Q", Q_NULLPTR));
        pushButtonR->setText(QApplication::translate("chazhao_Dialog", "R", Q_NULLPTR));
        pushButtonS->setText(QApplication::translate("chazhao_Dialog", "S", Q_NULLPTR));
        pushButtonT->setText(QApplication::translate("chazhao_Dialog", "T", Q_NULLPTR));
        pushButtonU->setText(QApplication::translate("chazhao_Dialog", "U", Q_NULLPTR));
        pushButtonV->setText(QApplication::translate("chazhao_Dialog", "V", Q_NULLPTR));
        pushButtonW->setText(QApplication::translate("chazhao_Dialog", "W", Q_NULLPTR));
        pushButtonX->setText(QApplication::translate("chazhao_Dialog", "X", Q_NULLPTR));
        pushButtonY->setText(QApplication::translate("chazhao_Dialog", "Y", Q_NULLPTR));
        pushButtonZ->setText(QApplication::translate("chazhao_Dialog", "Z", Q_NULLPTR));
        cancelButton->setText(QString());
        deleteButton->setText(QString());
        pushButton_close->setText(QApplication::translate("chazhao_Dialog", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chazhao_Dialog: public Ui_chazhao_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAZHAO_DIALOG_H
