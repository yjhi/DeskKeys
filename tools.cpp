#include "tools.h"
#include "ui_tools.h"
#include<windows.h>
#include<QThread>
Tools::Tools(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tools)
{
    ui->setupUi(this);

    this->setFocusPolicy(Qt::NoFocus);

    this->setWindowFlags(Qt::Tool);
    //this->setWindowFlags(Qt::WindowTransparentForInput);
}

Tools::~Tools()
{
    delete ui;
}

void Tools::on_pushButton_5_clicked()
{

    keybd_event(VK_CONTROL,0,0,0);

    keybd_event(VK_HOME,0,0,0);
    QThread::msleep(200);
     keybd_event(VK_HOME,0,2,0);

         keybd_event(VK_CONTROL,0,2,0);
}

void Tools::on_pushButton_4_clicked()
{
    keybd_event(VK_HOME,0,0,0);
    QThread::msleep(200);
     keybd_event(VK_HOME,0,2,0);



}
