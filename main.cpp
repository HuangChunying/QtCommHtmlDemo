#include "dialog.h"
#include <QApplication>
#include <qdebug.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;

    QString htmlpath ="D:/Qt_project/QtCommHtmlDemo/demo1/b.html";
    w.setHtmlPath(htmlpath);
    w.show();
    return a.exec();
}
