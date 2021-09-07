/********************************************************************************
** Form generated from reading UI file 'ziyuan_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZIYUAN_FORM_H
#define UI_ZIYUAN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ziyuan_Form
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *ziyuan_Form)
    {
        if (ziyuan_Form->objectName().isEmpty())
            ziyuan_Form->setObjectName(QStringLiteral("ziyuan_Form"));
        ziyuan_Form->resize(400, 300);
        gridLayout = new QGridLayout(ziyuan_Form);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 94, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(107, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        progressBar = new QProgressBar(ziyuan_Form);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(150, 35));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(107, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 94, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        pushButton = new QPushButton(ziyuan_Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(150, 35));

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);


        retranslateUi(ziyuan_Form);

        QMetaObject::connectSlotsByName(ziyuan_Form);
    } // setupUi

    void retranslateUi(QWidget *ziyuan_Form)
    {
        ziyuan_Form->setWindowTitle(QApplication::translate("ziyuan_Form", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ziyuan_Form", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ziyuan_Form: public Ui_ziyuan_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZIYUAN_FORM_H
