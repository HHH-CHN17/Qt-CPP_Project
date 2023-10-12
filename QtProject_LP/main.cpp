#include "QtProject_LP.h"
#include <QtWidgets/QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtProject_LP w;

    QString QssStyle;
    QFile qssfile(":/Demo.qss");
    qssfile.open(QFile::ReadOnly);
    if (qssfile.isOpen())
    {
        //QLatin1String加载快，QString也可以
        QssStyle = QLatin1String(qssfile.readAll());
        qApp->setStyleSheet(QssStyle);
        qssfile.close();
    }

    w.show();
    return a.exec();
}
