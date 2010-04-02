#include <QtGui/QApplication>
#include "qsoapexplorer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSoapExplorer w;
    w.show();
    return a.exec();
}
