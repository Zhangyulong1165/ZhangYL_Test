/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labTitle;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbnMin;
    QPushButton *pbnClose;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *labPic;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labUser;
    QLineEdit *lineEditUser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labPwd;
    QLineEdit *lineEditPwd;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pbnLogin;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(640, 480);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/User.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(LoginDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(LoginDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labTitle = new QLabel(frame);
        labTitle->setObjectName(QStringLiteral("labTitle"));

        horizontalLayout_5->addWidget(labTitle);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pbnMin = new QPushButton(frame);
        pbnMin->setObjectName(QStringLiteral("pbnMin"));
        pbnMin->setMinimumSize(QSize(40, 40));
        pbnMin->setMaximumSize(QSize(40, 40));
        pbnMin->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pbnMin);

        pbnClose = new QPushButton(frame);
        pbnClose->setObjectName(QStringLiteral("pbnClose"));
        pbnClose->setMinimumSize(QSize(40, 40));
        pbnClose->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(pbnClose);


        horizontalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        labPic = new QLabel(frame);
        labPic->setObjectName(QStringLiteral("labPic"));
        labPic->setMinimumSize(QSize(120, 120));
        labPic->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(labPic);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 20, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 9, -1, -1);
        labUser = new QLabel(frame);
        labUser->setObjectName(QStringLiteral("labUser"));

        horizontalLayout->addWidget(labUser);

        lineEditUser = new QLineEdit(frame);
        lineEditUser->setObjectName(QStringLiteral("lineEditUser"));
        lineEditUser->setMinimumSize(QSize(195, 30));

        horizontalLayout->addWidget(lineEditUser);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labPwd = new QLabel(frame);
        labPwd->setObjectName(QStringLiteral("labPwd"));

        horizontalLayout_2->addWidget(labPwd);

        lineEditPwd = new QLineEdit(frame);
        lineEditPwd->setObjectName(QStringLiteral("lineEditPwd"));
        lineEditPwd->setMinimumSize(QSize(0, 30));
        lineEditPwd->setMaximumSize(QSize(195, 16777215));

        horizontalLayout_2->addWidget(lineEditPwd);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pbnLogin = new QPushButton(frame);
        pbnLogin->setObjectName(QStringLiteral("pbnLogin"));
        pbnLogin->setMinimumSize(QSize(200, 55));
        pbnLogin->setStyleSheet(QStringLiteral(""));

        verticalLayout_3->addWidget(pbnLogin);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_7->addLayout(verticalLayout_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_7);


        verticalLayout_6->addLayout(verticalLayout_5);


        gridLayout_2->addLayout(verticalLayout_6, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", Q_NULLPTR));
        labTitle->setText(QApplication::translate("LoginDialog", "\351\253\230\347\262\276\345\272\246\350\267\237\347\236\204\350\257\204\344\274\260\347\263\273\347\273\237", Q_NULLPTR));
        pbnMin->setText(QString());
        pbnClose->setText(QString());
        labPic->setText(QString());
        labUser->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        labPwd->setText(QApplication::translate("LoginDialog", "\345\257\206  \347\240\201\357\274\232", Q_NULLPTR));
        pbnLogin->setText(QApplication::translate("LoginDialog", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
