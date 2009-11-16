#include <QtGui/QApplication>
#include "parrotshare.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ParrotShare w;
    w.show();
    return a.exec();
}
