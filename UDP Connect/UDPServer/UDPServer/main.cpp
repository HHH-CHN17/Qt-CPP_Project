#include "UDPServer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UDPServer w;
    w.show();
    return a.exec();
}
