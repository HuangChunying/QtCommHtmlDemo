#include "chartshow.h"
#include "ui_chartshow.h"

ChartShow::ChartShow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChartShow)
{
    ui->setupUi(this);
    QObject::connect(ui->actionopen, SIGNAL(triggered()), this, SLOT(close()));
}

ChartShow::~ChartShow()
{
    delete ui;
}
