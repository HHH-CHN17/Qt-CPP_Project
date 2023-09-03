#include "QtProject_LP.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtProject_LP w;
    w.show();
    return a.exec();
}
