#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QDialog>

namespace Ui {
class SettingDialog;
}

class SettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingDialog(QWidget *parent = nullptr);
    ~SettingDialog();

private slots:
    void on_pbnClose_clicked();

    void on_pbnMin_clicked();

    void on_pbnMax_clicked();

    void on_pbnFull_clicked();

    void on_pbnReset_clicked();

private:
    Ui::SettingDialog *ui;
    void initDialog();
};

#endif // SETTINGDIALOG_H
