#ifndef QWEBCHANNELCLASS_H
#define QWEBCHANNELCLASS_H

#include <QObject>

class QWebChannelClass : public QObject
{
    Q_OBJECT
public:
    explicit QWebChannelClass(QObject *parent = nullptr);

signals:
    void fromLocalToWebPage(const QString& strTemp);

public slots:
    void fromWebPageToLocal(const QString& strTemp);
};

#endif // QWEBCHANNELCLASS_H
