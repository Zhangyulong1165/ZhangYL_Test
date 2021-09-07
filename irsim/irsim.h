#ifndef IRSIM_H
#define IRSIM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Irsim; }
QT_END_NAMESPACE

class Irsim : public QMainWindow
{
    Q_OBJECT

public:
    Irsim(QWidget *parent = nullptr);
    ~Irsim();
private:
    //添加QSS文件
    void addQssFile();
    //初始化界面
    void initIrsim();
private:
    Ui::Irsim *ui;
};
extern Irsim *irsim;
#endif // IRSIM_H
