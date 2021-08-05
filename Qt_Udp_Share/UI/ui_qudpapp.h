/********************************************************************************
** Form generated from reading UI file 'qudpapp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUDPAPP_H
#define UI_QUDPAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QUdpApp
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *sendPortEdit;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *sendSigRb;
    QLineEdit *sendSigAddrEdit;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *sendMulRb;
    QLineEdit *sendMulAddrEdit;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *sendBroadRb;
    QLineEdit *sendBroadAddrEdit;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *recvCb;
    QLineEdit *recvPortEdit;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *recvMulAddrEdit;
    QPushButton *recvJoinMulBt;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *recvMulAddr;
    QPushButton *recvLeaveMulBt;
    QVBoxLayout *verticalLayout_5;
    QListWidget *recvList;
    QTextEdit *sendMesEdit;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *clearRecvListBt;
    QPushButton *clearsendEditBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendBt;

    void setupUi(QWidget *QUdpApp)
    {
        if (QUdpApp->objectName().isEmpty())
            QUdpApp->setObjectName(QString::fromUtf8("QUdpApp"));
        QUdpApp->resize(637, 561);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QUdpApp->sizePolicy().hasHeightForWidth());
        QUdpApp->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(QUdpApp);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        groupBox = new QGroupBox(QUdpApp);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        sendPortEdit = new QLineEdit(groupBox);
        sendPortEdit->setObjectName(QString::fromUtf8("sendPortEdit"));
        sizePolicy1.setHeightForWidth(sendPortEdit->sizePolicy().hasHeightForWidth());
        sendPortEdit->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(sendPortEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sendSigRb = new QRadioButton(groupBox);
        sendSigRb->setObjectName(QString::fromUtf8("sendSigRb"));

        horizontalLayout_2->addWidget(sendSigRb);

        sendSigAddrEdit = new QLineEdit(groupBox);
        sendSigAddrEdit->setObjectName(QString::fromUtf8("sendSigAddrEdit"));
        sizePolicy1.setHeightForWidth(sendSigAddrEdit->sizePolicy().hasHeightForWidth());
        sendSigAddrEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(sendSigAddrEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        sendMulRb = new QRadioButton(groupBox);
        sendMulRb->setObjectName(QString::fromUtf8("sendMulRb"));

        horizontalLayout_3->addWidget(sendMulRb);

        sendMulAddrEdit = new QLineEdit(groupBox);
        sendMulAddrEdit->setObjectName(QString::fromUtf8("sendMulAddrEdit"));
        sizePolicy1.setHeightForWidth(sendMulAddrEdit->sizePolicy().hasHeightForWidth());
        sendMulAddrEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(sendMulAddrEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        sendBroadRb = new QRadioButton(groupBox);
        sendBroadRb->setObjectName(QString::fromUtf8("sendBroadRb"));

        horizontalLayout_4->addWidget(sendBroadRb);

        sendBroadAddrEdit = new QLineEdit(groupBox);
        sendBroadAddrEdit->setObjectName(QString::fromUtf8("sendBroadAddrEdit"));
        sizePolicy1.setHeightForWidth(sendBroadAddrEdit->sizePolicy().hasHeightForWidth());
        sendBroadAddrEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(sendBroadAddrEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_9->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QUdpApp);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        recvCb = new QCheckBox(groupBox_2);
        recvCb->setObjectName(QString::fromUtf8("recvCb"));

        horizontalLayout_7->addWidget(recvCb);

        recvPortEdit = new QLineEdit(groupBox_2);
        recvPortEdit->setObjectName(QString::fromUtf8("recvPortEdit"));

        horizontalLayout_7->addWidget(recvPortEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        recvMulAddrEdit = new QLineEdit(groupBox_2);
        recvMulAddrEdit->setObjectName(QString::fromUtf8("recvMulAddrEdit"));

        horizontalLayout_5->addWidget(recvMulAddrEdit);

        recvJoinMulBt = new QPushButton(groupBox_2);
        recvJoinMulBt->setObjectName(QString::fromUtf8("recvJoinMulBt"));
        recvJoinMulBt->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_5->addWidget(recvJoinMulBt);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        recvMulAddr = new QComboBox(groupBox_2);
        recvMulAddr->setObjectName(QString::fromUtf8("recvMulAddr"));

        horizontalLayout_6->addWidget(recvMulAddr);

        recvLeaveMulBt = new QPushButton(groupBox_2);
        recvLeaveMulBt->setObjectName(QString::fromUtf8("recvLeaveMulBt"));
        recvLeaveMulBt->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_6->addWidget(recvLeaveMulBt);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_4->addLayout(verticalLayout);


        horizontalLayout_9->addWidget(groupBox_2);


        verticalLayout_6->addLayout(horizontalLayout_9);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        recvList = new QListWidget(QUdpApp);
        recvList->setObjectName(QString::fromUtf8("recvList"));

        verticalLayout_5->addWidget(recvList);

        sendMesEdit = new QTextEdit(QUdpApp);
        sendMesEdit->setObjectName(QString::fromUtf8("sendMesEdit"));
        sendMesEdit->setMaximumSize(QSize(16777215, 100));

        verticalLayout_5->addWidget(sendMesEdit);


        verticalLayout_6->addLayout(verticalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        clearRecvListBt = new QPushButton(QUdpApp);
        clearRecvListBt->setObjectName(QString::fromUtf8("clearRecvListBt"));

        horizontalLayout_8->addWidget(clearRecvListBt);

        clearsendEditBt = new QPushButton(QUdpApp);
        clearsendEditBt->setObjectName(QString::fromUtf8("clearsendEditBt"));

        horizontalLayout_8->addWidget(clearsendEditBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        sendBt = new QPushButton(QUdpApp);
        sendBt->setObjectName(QString::fromUtf8("sendBt"));

        horizontalLayout_8->addWidget(sendBt);


        verticalLayout_6->addLayout(horizontalLayout_8);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);


        retranslateUi(QUdpApp);
        QObject::connect(clearRecvListBt, SIGNAL(clicked()), recvList, SLOT(clear()));
        QObject::connect(clearsendEditBt, SIGNAL(clicked()), sendMesEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(QUdpApp);
    } // setupUi

    void retranslateUi(QWidget *QUdpApp)
    {
        QUdpApp->setWindowTitle(QApplication::translate("QUdpApp", "QUdpApp", nullptr));
        groupBox->setTitle(QApplication::translate("QUdpApp", "\345\217\221\351\200\201\347\253\257", nullptr));
        label->setText(QApplication::translate("QUdpApp", "\347\253\257 \345\217\243 \345\217\267", nullptr));
        sendPortEdit->setPlaceholderText(QApplication::translate("QUdpApp", "\350\257\267\350\276\223\345\205\245\347\253\257\345\217\243\345\217\267", nullptr));
        sendSigRb->setText(QApplication::translate("QUdpApp", "\345\215\225\346\222\255", nullptr));
        sendSigAddrEdit->setPlaceholderText(QApplication::translate("QUdpApp", "\350\257\267\350\276\223\345\205\245\346\216\245\346\224\266\346\226\271\345\234\260\345\235\200", nullptr));
        sendMulRb->setText(QApplication::translate("QUdpApp", "\347\273\204\346\222\255", nullptr));
        sendMulAddrEdit->setPlaceholderText(QApplication::translate("QUdpApp", "\350\257\267\350\276\223\345\205\245\347\273\204\346\222\255\345\234\260\345\235\200", nullptr));
        sendBroadRb->setText(QApplication::translate("QUdpApp", "\345\271\277\346\222\255", nullptr));
        sendBroadAddrEdit->setPlaceholderText(QApplication::translate("QUdpApp", "\350\257\267\350\276\223\345\205\245\345\271\277\346\222\255\345\234\260\345\235\200", nullptr));
        groupBox_2->setTitle(QApplication::translate("QUdpApp", "\346\216\245\346\224\266\347\253\257", nullptr));
        recvCb->setText(QApplication::translate("QUdpApp", "\346\216\245\346\224\266", nullptr));
        recvPortEdit->setPlaceholderText(QApplication::translate("QUdpApp", "\350\257\267\350\276\223\345\205\245\347\253\257\345\217\243\345\217\267", nullptr));
        recvMulAddrEdit->setPlaceholderText(QApplication::translate("QUdpApp", "\350\276\223\345\205\245\350\246\201\345\212\240\345\205\245\347\232\204\347\273\204\346\222\255\345\234\260\345\235\200", nullptr));
        recvJoinMulBt->setText(QApplication::translate("QUdpApp", "\345\212\240\345\205\245", nullptr));
        recvLeaveMulBt->setText(QApplication::translate("QUdpApp", "\351\200\200\345\207\272", nullptr));
        clearRecvListBt->setText(QApplication::translate("QUdpApp", "\346\270\205\351\231\244\346\216\245\346\224\266\345\214\272", nullptr));
        clearsendEditBt->setText(QApplication::translate("QUdpApp", "\346\270\205\351\231\244\345\217\221\351\200\201\345\214\272", nullptr));
        sendBt->setText(QApplication::translate("QUdpApp", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QUdpApp: public Ui_QUdpApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUDPAPP_H
