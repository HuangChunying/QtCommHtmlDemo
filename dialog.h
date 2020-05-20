#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <filedialog.h>
#include "qwebchannelclass.h"
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    void setHtmlPath(QString htmlPath);

    ~Dialog();
    void initWebChannel();


private:
    Ui::Dialog *ui;
    FileDialog *fileDialog;
    QWebChannelClass *m_pWebChannelClass;
};

#endif // DIALOG_H
