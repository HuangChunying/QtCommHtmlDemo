#include "qwebchannelclass.h"
#include <QDebug>

QWebChannelClass::QWebChannelClass(QObject *parent) : QObject(parent)
{

}

void QWebChannelClass::fromWebPageToLocal(const QString& strtemp)
{
    qDebug()<<QString("String from webpage: %1").arg(strtemp);
    emit fromLocalToWebPage(strtemp);
}
