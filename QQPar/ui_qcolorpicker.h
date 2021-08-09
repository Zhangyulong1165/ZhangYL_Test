/********************************************************************************
** Form generated from reading UI file 'qcolorpicker.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCOLORPICKER_H
#define UI_QCOLORPICKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QColorPicker
{
public:
    QHBoxLayout *horizontalLayout_4;
    QPushButton *minBtn;
    QPushButton *midBtn;
    QPushButton *largeBtn;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *color;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *color1;
    QPushButton *color2;
    QPushButton *color3;
    QPushButton *color4;
    QPushButton *color5;
    QPushButton *color6;
    QPushButton *color7;
    QPushButton *color8;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *color9;
    QPushButton *color10;
    QPushButton *color11;
    QPushButton *color12;
    QPushButton *color13;
    QPushButton *color14;
    QPushButton *color15;
    QPushButton *color16;

    void setupUi(QWidget *QColorPicker)
    {
        if (QColorPicker->objectName().isEmpty())
            QColorPicker->setObjectName(QString::fromUtf8("QColorPicker"));
        QColorPicker->resize(300, 48);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QColorPicker->sizePolicy().hasHeightForWidth());
        QColorPicker->setSizePolicy(sizePolicy);
        QColorPicker->setMinimumSize(QSize(300, 48));
        QColorPicker->setMaximumSize(QSize(300, 48));
        QColorPicker->setCursor(QCursor(Qt::ArrowCursor));
        QColorPicker->setStyleSheet(QString::fromUtf8("QWidget#QColorPicker\n"
"{\n"
"	background-color:rgb(229,240,239);\n"
"	border-radius:2px;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(QColorPicker);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(6, 0, 6, 0);
        minBtn = new QPushButton(QColorPicker);
        minBtn->setObjectName(QString::fromUtf8("minBtn"));
        sizePolicy.setHeightForWidth(minBtn->sizePolicy().hasHeightForWidth());
        minBtn->setSizePolicy(sizePolicy);
        minBtn->setMinimumSize(QSize(32, 32));
        minBtn->setMaximumSize(QSize(32, 32));
        minBtn->setCursor(QCursor(Qt::ArrowCursor));
        minBtn->setStyleSheet(QString::fromUtf8("QPushButton#minBtn {\n"
"   background-color:transparent;\n"
"	background-position:center;\n"
"   background-image: url(:/FrmCaptureTool/Resources/screenImg/line_weight_3.png); \n"
"}\n"
"QPushButton#minBtn:hover {\n"
"   background-image:url(:/FrmCaptureTool/Resources/screenImg/line_weight_3.png);\n"
"   background-position:center;\n"
"   border-image:url(:/FrmCaptureTool/Resources/screenImg/btn_hover.png);\n"
"   border-width:2px;\n"
"}\n"
"QPushButton#minBtn:pressed, QPushButton#minBtn:checked {\n"
"   background-image:url(:/FrmCaptureTool/Resources/screenImg/line_weight_3.png);\n"
"   background-position:center;\n"
"   border-image:url(:/FrmCaptureTool/Resources/screenImg/btn_down.png);\n"
"   border-width:2px;\n"
"}"));
        minBtn->setCheckable(true);

        horizontalLayout_4->addWidget(minBtn);

        midBtn = new QPushButton(QColorPicker);
        midBtn->setObjectName(QString::fromUtf8("midBtn"));
        sizePolicy.setHeightForWidth(midBtn->sizePolicy().hasHeightForWidth());
        midBtn->setSizePolicy(sizePolicy);
        midBtn->setMinimumSize(QSize(32, 32));
        midBtn->setMaximumSize(QSize(32, 32));
        midBtn->setCursor(QCursor(Qt::ArrowCursor));
        midBtn->setStyleSheet(QString::fromUtf8("QPushButton#midBtn {\n"
"   background-color:transparent;\n"
"	background-position:center;\n"
"   background-image: url(:/FrmCaptureTool/Resources/screenImg/line_weight_4.png); \n"
"}\n"
"QPushButton#midBtn:hover {\n"
"   background-image:url(:/FrmCaptureTool/Resources/screenImg/line_weight_4.png);\n"
"   background-position:center;\n"
"   border-image:url(:/FrmCaptureTool/Resources/screenImg/btn_hover.png);\n"
"   border-width:2px;\n"
"}\n"
"QPushButton#midBtn:pressed, QPushButton#midBtn:checked {\n"
"   background-image:url(:/FrmCaptureTool/Resources/screenImg/line_weight_4.png);\n"
"   background-position:center;\n"
"   border-image:url(:/FrmCaptureTool/Resources/screenImg/btn_down.png);\n"
"   border-width:2px;\n"
"}"));
        midBtn->setCheckable(true);

        horizontalLayout_4->addWidget(midBtn);

        largeBtn = new QPushButton(QColorPicker);
        largeBtn->setObjectName(QString::fromUtf8("largeBtn"));
        sizePolicy.setHeightForWidth(largeBtn->sizePolicy().hasHeightForWidth());
        largeBtn->setSizePolicy(sizePolicy);
        largeBtn->setMinimumSize(QSize(32, 32));
        largeBtn->setMaximumSize(QSize(32, 32));
        largeBtn->setCursor(QCursor(Qt::ArrowCursor));
        largeBtn->setStyleSheet(QString::fromUtf8("QPushButton#largeBtn {\n"
"   background-color:transparent;\n"
"	background-position:center;\n"
"   background-image: url(:/FrmCaptureTool/Resources/screenImg/line_weight_5.png); \n"
"}\n"
"QPushButton#largeBtn:hover {\n"
"   background-image:url(:/FrmCaptureTool/Resources/screenImg/line_weight_5.png);\n"
"   background-position:center;\n"
"   border-image:url(:/FrmCaptureTool/Resources/screenImg/btn_hover.png);\n"
"   border-width:2px;\n"
"}\n"
"QPushButton#largeBtn:pressed, QPushButton#largeBtn:checked {\n"
"   background-image:url(:/FrmCaptureTool/Resources/screenImg/line_weight_5.png);\n"
"   background-position:center;\n"
"   border-image:url(:/FrmCaptureTool/Resources/screenImg/btn_down.png);\n"
"   border-width:2px;\n"
"}"));
        largeBtn->setCheckable(true);

        horizontalLayout_4->addWidget(largeBtn);

        label = new QLabel(QColorPicker);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(2, 38));
        label->setMaximumSize(QSize(2, 38));
        label->setStyleSheet(QString::fromUtf8("QLabel{background-color: rgb(212, 212, 212);}\n"
""));
        label->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(6, -1, -1, -1);
        color = new QPushButton(QColorPicker);
        color->setObjectName(QString::fromUtf8("color"));
        sizePolicy.setHeightForWidth(color->sizePolicy().hasHeightForWidth());
        color->setSizePolicy(sizePolicy);
        color->setMinimumSize(QSize(38, 38));
        color->setMaximumSize(QSize(38, 38));
        color->setCursor(QCursor(Qt::ArrowCursor));
        color->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(255, 0, 0);\n"
"}"));

        horizontalLayout_3->addWidget(color);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        color1 = new QPushButton(QColorPicker);
        color1->setObjectName(QString::fromUtf8("color1"));
        sizePolicy.setHeightForWidth(color1->sizePolicy().hasHeightForWidth());
        color1->setSizePolicy(sizePolicy);
        color1->setMinimumSize(QSize(12, 12));
        color1->setMaximumSize(QSize(12, 12));
        color1->setCursor(QCursor(Qt::ArrowCursor));
        color1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout->addWidget(color1);

        color2 = new QPushButton(QColorPicker);
        color2->setObjectName(QString::fromUtf8("color2"));
        sizePolicy.setHeightForWidth(color2->sizePolicy().hasHeightForWidth());
        color2->setSizePolicy(sizePolicy);
        color2->setMinimumSize(QSize(12, 12));
        color2->setMaximumSize(QSize(12, 12));
        color2->setCursor(QCursor(Qt::ArrowCursor));
        color2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(170, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};\n"
""));

        horizontalLayout->addWidget(color2);

        color3 = new QPushButton(QColorPicker);
        color3->setObjectName(QString::fromUtf8("color3"));
        sizePolicy.setHeightForWidth(color3->sizePolicy().hasHeightForWidth());
        color3->setSizePolicy(sizePolicy);
        color3->setMinimumSize(QSize(12, 12));
        color3->setMaximumSize(QSize(12, 12));
        color3->setCursor(QCursor(Qt::ArrowCursor));
        color3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(85, 170, 255);\n"
"	border:none;\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};\n"
"	"));
        color3->setFlat(false);

        horizontalLayout->addWidget(color3);

        color4 = new QPushButton(QColorPicker);
        color4->setObjectName(QString::fromUtf8("color4"));
        sizePolicy.setHeightForWidth(color4->sizePolicy().hasHeightForWidth());
        color4->setSizePolicy(sizePolicy);
        color4->setMinimumSize(QSize(12, 12));
        color4->setMaximumSize(QSize(12, 12));
        color4->setCursor(QCursor(Qt::ArrowCursor));
        color4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(200, 200, 200);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout->addWidget(color4);

        color5 = new QPushButton(QColorPicker);
        color5->setObjectName(QString::fromUtf8("color5"));
        sizePolicy.setHeightForWidth(color5->sizePolicy().hasHeightForWidth());
        color5->setSizePolicy(sizePolicy);
        color5->setMinimumSize(QSize(12, 12));
        color5->setMaximumSize(QSize(12, 12));
        color5->setCursor(QCursor(Qt::ArrowCursor));
        color5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(170, 0, 127);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout->addWidget(color5);

        color6 = new QPushButton(QColorPicker);
        color6->setObjectName(QString::fromUtf8("color6"));
        sizePolicy.setHeightForWidth(color6->sizePolicy().hasHeightForWidth());
        color6->setSizePolicy(sizePolicy);
        color6->setMinimumSize(QSize(12, 12));
        color6->setMaximumSize(QSize(12, 12));
        color6->setCursor(QCursor(Qt::ArrowCursor));
        color6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(0, 85, 127);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout->addWidget(color6);

        color7 = new QPushButton(QColorPicker);
        color7->setObjectName(QString::fromUtf8("color7"));
        sizePolicy.setHeightForWidth(color7->sizePolicy().hasHeightForWidth());
        color7->setSizePolicy(sizePolicy);
        color7->setMinimumSize(QSize(12, 12));
        color7->setMaximumSize(QSize(12, 12));
        color7->setCursor(QCursor(Qt::ArrowCursor));
        color7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(170, 170, 127);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout->addWidget(color7);

        color8 = new QPushButton(QColorPicker);
        color8->setObjectName(QString::fromUtf8("color8"));
        sizePolicy.setHeightForWidth(color8->sizePolicy().hasHeightForWidth());
        color8->setSizePolicy(sizePolicy);
        color8->setMinimumSize(QSize(12, 12));
        color8->setMaximumSize(QSize(12, 12));
        color8->setCursor(QCursor(Qt::ArrowCursor));
        color8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(130, 149, 46);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout->addWidget(color8);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        color9 = new QPushButton(QColorPicker);
        color9->setObjectName(QString::fromUtf8("color9"));
        sizePolicy.setHeightForWidth(color9->sizePolicy().hasHeightForWidth());
        color9->setSizePolicy(sizePolicy);
        color9->setMinimumSize(QSize(12, 12));
        color9->setMaximumSize(QSize(12, 12));
        color9->setCursor(QCursor(Qt::ArrowCursor));
        color9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(170, 0, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout_2->addWidget(color9);

        color10 = new QPushButton(QColorPicker);
        color10->setObjectName(QString::fromUtf8("color10"));
        sizePolicy.setHeightForWidth(color10->sizePolicy().hasHeightForWidth());
        color10->setSizePolicy(sizePolicy);
        color10->setMinimumSize(QSize(12, 12));
        color10->setMaximumSize(QSize(12, 12));
        color10->setCursor(QCursor(Qt::ArrowCursor));
        color10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(255, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout_2->addWidget(color10);

        color11 = new QPushButton(QColorPicker);
        color11->setObjectName(QString::fromUtf8("color11"));
        sizePolicy.setHeightForWidth(color11->sizePolicy().hasHeightForWidth());
        color11->setSizePolicy(sizePolicy);
        color11->setMinimumSize(QSize(12, 12));
        color11->setMaximumSize(QSize(12, 12));
        color11->setCursor(QCursor(Qt::ArrowCursor));
        color11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(255, 170, 0);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout_2->addWidget(color11);

        color12 = new QPushButton(QColorPicker);
        color12->setObjectName(QString::fromUtf8("color12"));
        sizePolicy.setHeightForWidth(color12->sizePolicy().hasHeightForWidth());
        color12->setSizePolicy(sizePolicy);
        color12->setMinimumSize(QSize(12, 12));
        color12->setMaximumSize(QSize(12, 12));
        color12->setCursor(QCursor(Qt::ArrowCursor));
        color12->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(255, 129, 19);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout_2->addWidget(color12);

        color13 = new QPushButton(QColorPicker);
        color13->setObjectName(QString::fromUtf8("color13"));
        sizePolicy.setHeightForWidth(color13->sizePolicy().hasHeightForWidth());
        color13->setSizePolicy(sizePolicy);
        color13->setMinimumSize(QSize(12, 12));
        color13->setMaximumSize(QSize(12, 12));
        color13->setCursor(QCursor(Qt::ArrowCursor));
        color13->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(255, 170, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout_2->addWidget(color13);

        color14 = new QPushButton(QColorPicker);
        color14->setObjectName(QString::fromUtf8("color14"));
        sizePolicy.setHeightForWidth(color14->sizePolicy().hasHeightForWidth());
        color14->setSizePolicy(sizePolicy);
        color14->setMinimumSize(QSize(12, 12));
        color14->setMaximumSize(QSize(12, 12));
        color14->setCursor(QCursor(Qt::ArrowCursor));
        color14->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(157, 127, 157);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout_2->addWidget(color14);

        color15 = new QPushButton(QColorPicker);
        color15->setObjectName(QString::fromUtf8("color15"));
        sizePolicy.setHeightForWidth(color15->sizePolicy().hasHeightForWidth());
        color15->setSizePolicy(sizePolicy);
        color15->setMinimumSize(QSize(12, 12));
        color15->setMaximumSize(QSize(12, 12));
        color15->setCursor(QCursor(Qt::ArrowCursor));
        color15->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;	\n"
"	background-color: rgb(255, 85, 0);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout_2->addWidget(color15);

        color16 = new QPushButton(QColorPicker);
        color16->setObjectName(QString::fromUtf8("color16"));
        sizePolicy.setHeightForWidth(color16->sizePolicy().hasHeightForWidth());
        color16->setSizePolicy(sizePolicy);
        color16->setMinimumSize(QSize(12, 12));
        color16->setMaximumSize(QSize(12, 12));
        color16->setCursor(QCursor(Qt::ArrowCursor));
        color16->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(85, 170, 127);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffffff;\n"
"	padding:1px;\n"
"};"));

        horizontalLayout_2->addWidget(color16);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(QColorPicker);

        QMetaObject::connectSlotsByName(QColorPicker);
    } // setupUi

    void retranslateUi(QWidget *QColorPicker)
    {
        QColorPicker->setWindowTitle(QApplication::translate("QColorPicker", "QColorPicker", nullptr));
        minBtn->setText(QString());
        midBtn->setText(QString());
        largeBtn->setText(QString());
        label->setText(QString());
        color->setText(QString());
        color1->setText(QString());
        color2->setText(QString());
        color3->setText(QString());
        color4->setText(QString());
        color5->setText(QString());
        color6->setText(QString());
        color7->setText(QString());
        color8->setText(QString());
        color9->setText(QString());
        color10->setText(QString());
        color11->setText(QString());
        color12->setText(QString());
        color13->setText(QString());
        color14->setText(QString());
        color15->setText(QString());
        color16->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QColorPicker: public Ui_QColorPicker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCOLORPICKER_H
