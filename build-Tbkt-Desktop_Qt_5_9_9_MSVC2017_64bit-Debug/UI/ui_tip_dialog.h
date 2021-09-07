/********************************************************************************
** Form generated from reading UI file 'tip_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIP_DIALOG_H
#define UI_TIP_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_tip_Dialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QDialog *tip_Dialog)
    {
        if (tip_Dialog->objectName().isEmpty())
            tip_Dialog->setObjectName(QStringLiteral("tip_Dialog"));
        tip_Dialog->resize(300, 200);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        tip_Dialog->setWindowIcon(icon);
        tip_Dialog->setStyleSheet(QLatin1String("QFrame#frame\n"
"{\n"
"background-color: rgb(255, 0, 0);\n"
"}"));
        gridLayout = new QGridLayout(tip_Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(tip_Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 1, 0, 1, 1);


        retranslateUi(tip_Dialog);

        QMetaObject::connectSlotsByName(tip_Dialog);
    } // setupUi

    void retranslateUi(QDialog *tip_Dialog)
    {
        tip_Dialog->setWindowTitle(QApplication::translate("tip_Dialog", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        label->setText(QApplication::translate("tip_Dialog", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tip_Dialog: public Ui_tip_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIP_DIALOG_H
