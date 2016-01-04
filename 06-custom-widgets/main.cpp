#include "mainwindow.h"
#include <QApplication>
#include "clickcounter.h"
#include <QtGui>
#include "clickablelabel.h"
#include "coolwiddget.h"
#include "countedtextedit.h"
#include "tictactoeboard.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TicTacToeBoard e;
    e.show();

    return a.exec();
}
