#include "mainwindow.h"
#include <QApplication>
#include "clickcounter.h"
#include <QtGui>
#include "clickablelabel.h"
#include "coolwiddget.h"
#include "countedtextedit.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow e;
    e.show();

    return a.exec();
}
