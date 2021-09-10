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
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pbnReset;
    QPushButton *pbnFull;
    QPushButton *pbnMax;
    QPushButton *pbnMin;
    QPushButton *pbnClose;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QStringLiteral("SettingDialog"));
        SettingDialog->resize(153, 640);
        gridLayout = new QGridLayout(SettingDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(SettingDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 369, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        pbnReset = new QPushButton(frame);
        pbnReset->setObjectName(QStringLiteral("pbnReset"));
        pbnReset->setMinimumSize(QSize(80, 40));

        gridLayout_2->addWidget(pbnReset, 1, 0, 1, 1);

        pbnFull = new QPushButton(frame);
        pbnFull->setObjectName(QStringLiteral("pbnFull"));
        pbnFull->setMinimumSize(QSize(80, 40));

        gridLayout_2->addWidget(pbnFull, 2, 0, 1, 1);

        pbnMax = new QPushButton(frame);
        pbnMax->setObjectName(QStringLiteral("pbnMax"));
        pbnMax->setMinimumSize(QSize(80, 40));

        gridLayout_2->addWidget(pbnMax, 3, 0, 1, 1);

        pbnMin = new QPushButton(frame);
        pbnMin->setObjectName(QStringLiteral("pbnMin"));
        pbnMin->setMinimumSize(QSize(80, 40));

        gridLayout_2->addWidget(pbnMin, 4, 0, 1, 1);

        pbnClose = new QPushButton(frame);
        pbnClose->setObjectName(QStringLiteral("pbnClose"));
        pbnClose->setMinimumSize(QSize(80, 40));

        gridLayout_2->addWidget(pbnClose, 5, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(SettingDialog);

        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QApplication::translate("SettingDialog", "Dialog", Q_NULLPTR));
        pbnReset->setText(QApplication::translate("SettingDialog", "\345\210\235\345\247\213\345\214\226\347\252\227\345\217\243", Q_NULLPTR));
        pbnFull->setText(QApplication::translate("SettingDialog", "\345\205\250\345\261\217\346\230\276\347\244\272", Q_NULLPTR));
        pbnMax->setText(QApplication::translate("SettingDialog", "\346\234\200\345\244\247\345\214\226", Q_NULLPTR));
        pbnMin->setText(QApplication::translate("SettingDialog", "\346\234\200\345\260\217\345\214\226", Q_NULLPTR));
        pbnClose->setText(QApplication::translate("SettingDialog", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
