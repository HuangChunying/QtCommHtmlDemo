#include "dialog.h"
#include "ui_dialog.h"
#include <QWebChannel>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    fileDialog = new FileDialog(this);
    chartShow = new ChartShow();
    chartWidget = new ChartWidget();
    QObject::connect(ui->pushButton, SIGNAL(clicked()), fileDialog, SLOT(show()));
    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), fileDialog, SLOT(exec()));
    QObject::connect(ui->pushButton_3, SIGNAL(clicked()), chartShow, SLOT(show()));
    QObject::connect(ui->pushButton_4, SIGNAL(clicked()), chartWidget, SLOT(show()));
    m_pWebChannelClass = new QWebChannelClass(this);
    initWebChannel();
}


void Dialog::setHtmlPath(QString htmlPath)
{
    ui->widget->setContextMenuPolicy(Qt::NoContextMenu);
    ui->widget->load(QUrl(htmlPath));

}
void Dialog::initWebChannel()
{
    QWebChannel *pChannel=new QWebChannel(this);
    pChannel->registerObject(QStringLiteral("channelObject"),m_pWebChannelClass);
    ui->widget->page()->setWebChannel(pChannel);
}

Dialog::~Dialog()
{
    delete ui;
}
