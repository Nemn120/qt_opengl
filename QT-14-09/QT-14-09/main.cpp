#include "QT1409.h"
#include <QtWidgets/QApplication>
#include <libs.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QT1409 w;
    w.show();
    return a.exec();
}
