/********************************************************************************
** Form generated from reading UI file 'amplifierwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPLIFIERWIDGET_H
#define UI_AMPLIFIERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AmplifierWidget
{
public:

    void setupUi(QWidget *AmplifierWidget)
    {
        if (AmplifierWidget->objectName().isEmpty())
            AmplifierWidget->setObjectName(QString::fromUtf8("AmplifierWidget"));
        AmplifierWidget->resize(132, 130);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AmplifierWidget->sizePolicy().hasHeightForWidth());
        AmplifierWidget->setSizePolicy(sizePolicy);
        AmplifierWidget->setMinimumSize(QSize(132, 130));
        AmplifierWidget->setMaximumSize(QSize(132, 130));

        retranslateUi(AmplifierWidget);

        QMetaObject::connectSlotsByName(AmplifierWidget);
    } // setupUi

    void retranslateUi(QWidget *AmplifierWidget)
    {
        AmplifierWidget->setWindowTitle(QApplication::translate("AmplifierWidget", "AmplifierWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AmplifierWidget: public Ui_AmplifierWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPLIFIERWIDGET_H
