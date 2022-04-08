#include "tools.h"
#include "ui_tools.h"
#include<windows.h>
#include<QThread>

#include"keyutils.h"
#include<QTimer>
Tools::Tools(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tools)
{
    ui->setupUi(this);

    HWND h=(HWND)this->winId();
    KeyUtils::SetTopMost(h);

    KeyUtils::SetWinNoActive(h);

}

Tools::~Tools()
{
    delete ui;
}

void Tools::on_pushButton_5_clicked()
{

    QTimer::singleShot(1500, this,[&](){

        KeyUtils::ClickMKey(VK_CONTROL,VK_HOME);
    });

}

void Tools::on_pushButton_4_clicked()
{

    QTimer::singleShot(1500, this,[&](){
        KeyUtils::ClickKey(VK_HOME);
    });

}
