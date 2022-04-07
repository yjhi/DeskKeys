#include "mainwindow.h"
#include <QApplication>
#include"tools.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    Tools t;
    t.show();

    return a.exec();
}
