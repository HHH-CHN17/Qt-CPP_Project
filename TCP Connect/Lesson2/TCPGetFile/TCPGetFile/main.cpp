#include "TCPGetFile.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TCPGetFile w;
    w.show();
    return a.exec();
}
