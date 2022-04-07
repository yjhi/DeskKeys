#ifndef TOOLS_H
#define TOOLS_H

#include <QWidget>

namespace Ui {
class Tools;
}

class Tools : public QWidget
{
    Q_OBJECT

public:
    explicit Tools(QWidget *parent = 0);
    ~Tools();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Tools *ui;
};

#endif // TOOLS_H
