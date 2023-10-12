#include "MainView.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CMainView w;
    w.show();
    return a.exec();
}
