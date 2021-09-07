/********************************************************************************
** Form generated from reading UI file 'xieyidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XIEYIDIALOG_H
#define UI_XIEYIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_xieyiDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_guanbi;

    void setupUi(QDialog *xieyiDialog)
    {
        if (xieyiDialog->objectName().isEmpty())
            xieyiDialog->setObjectName(QStringLiteral("xieyiDialog"));
        xieyiDialog->resize(318, 388);
        xieyiDialog->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        xieyiDialog->setWindowIcon(icon);
        xieyiDialog->setStyleSheet(QString::fromUtf8("QDialog#xieyiDialog{\n"
"	border-style: solid;\n"
"    border-color: rgb(200, 200,200);\n"
"	border-width:1px;\n"
"	border-radius:20px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QFrame{\n"
"	border-style: solid;\n"
"    border-color: rgb(200, 200,200);\n"
"	border-width:1px;\n"
"	border-radius:20px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton {\n"
"    border-style: solid;\n"
"	border-bottom-color: rgb(200,200, 200);\n"
"	border-right-color: rgb(255, 255, 255);\n"
"	border-top-color: rgb(255, 255, 255);\n"
"	border-left-color: rgb(255, 255, 255);\n"
"    border-width: 1px;\n"
"	font:14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"   \n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"QPushButton:hover{\n"
"    background-color: rgb(220, 220, 220);\n"
"}\n"
"QPushButton:pressed{\n"
"	color: green;\n"
"}"));
        gridLayout = new QGridLayout(xieyiDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 10, -1, -1);
        frame = new QFrame(xieyiDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(pushButton_5, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 33, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        pushButton_guanbi = new QPushButton(frame);
        pushButton_guanbi->setObjectName(QStringLiteral("pushButton_guanbi"));
        pushButton_guanbi->setMinimumSize(QSize(0, 60));

        gridLayout_2->addWidget(pushButton_guanbi, 6, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(xieyiDialog);

        QMetaObject::connectSlotsByName(xieyiDialog);
    } // setupUi

    void retranslateUi(QDialog *xieyiDialog)
    {
        xieyiDialog->setWindowTitle(QApplication::translate("xieyiDialog", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton->setText(QApplication::translate("xieyiDialog", "\347\224\250\346\210\267\346\234\215\345\212\241\345\215\217\350\256\256", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("xieyiDialog", "\347\224\250\346\210\267\351\232\220\347\247\201\346\224\277\347\255\226", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("xieyiDialog", "\345\204\277\347\253\245\347\224\250\346\210\267\351\232\220\347\247\201\346\224\277\347\255\226", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("xieyiDialog", "\346\212\225\350\257\211\344\270\276\346\212\245", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("xieyiDialog", "\346\263\250\351\224\200\350\264\246\345\217\267", Q_NULLPTR));
        pushButton_guanbi->setText(QApplication::translate("xieyiDialog", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class xieyiDialog: public Ui_xieyiDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XIEYIDIALOG_H
