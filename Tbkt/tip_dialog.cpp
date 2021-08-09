#include "tip_dialog.h"
#include "ui_tip_dialog.h"

tip_Dialog::tip_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tip_Dialog)
{
    ui->setupUi(this);
}

tip_Dialog::~tip_Dialog()
{
    delete ui;
}
