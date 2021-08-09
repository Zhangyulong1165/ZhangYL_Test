#ifndef TIP_DIALOG_H
#define TIP_DIALOG_H

#include <QDialog>

namespace Ui {
class tip_Dialog;
}

class tip_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit tip_Dialog(QWidget *parent = nullptr);
    ~tip_Dialog();

private:
    Ui::tip_Dialog *ui;
};

#endif // TIP_DIALOG_H
