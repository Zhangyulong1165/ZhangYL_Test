/********************************************************************************
** Form generated from reading UI file 'frmcapturetool.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCAPTURETOOL_H
#define UI_FRMCAPTURETOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmCaptureToolClass
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *FrmCaptureToolClass)
    {
        if (FrmCaptureToolClass->objectName().isEmpty())
            FrmCaptureToolClass->setObjectName(QString::fromUtf8("FrmCaptureToolClass"));
        FrmCaptureToolClass->resize(600, 400);
        verticalLayout = new QVBoxLayout(FrmCaptureToolClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(FrmCaptureToolClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        label = new QLabel(FrmCaptureToolClass);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);


        retranslateUi(FrmCaptureToolClass);

        QMetaObject::connectSlotsByName(FrmCaptureToolClass);
    } // setupUi

    void retranslateUi(QWidget *FrmCaptureToolClass)
    {
        FrmCaptureToolClass->setWindowTitle(QApplication::translate("FrmCaptureToolClass", "FrmCaptureTool", nullptr));
        pushButton->setText(QApplication::translate("FrmCaptureToolClass", "\346\210\252\345\233\276", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FrmCaptureToolClass: public Ui_FrmCaptureToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCAPTURETOOL_H
