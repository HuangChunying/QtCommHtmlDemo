#ifndef CHARTSHOW_H
#define CHARTSHOW_H

#include <QMainWindow>

namespace Ui {
class ChartShow;
}

class ChartShow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChartShow(QWidget *parent = 0);
    ~ChartShow();

private:
    Ui::ChartShow *ui;
};

#endif // CHARTSHOW_H
