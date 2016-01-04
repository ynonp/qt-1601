#include "mainwindow.h"
#include <QApplication>
#include "clickcounter.h"
#include <QtGui>
#include "clickablelabel.h"
#include "coolwiddget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget w;
    QHBoxLayout *layout = new QHBoxLayout(&w);
    layout->addWidget(new ClickCounter);
    layout->addWidget(new ClickCounter);
    layout->addWidget(new ClickCounter);
    layout->addWidget(new ClickableLabel("Hello World"));
    layout->addWidget(new CoolWiddget);
    w.show();

    return a.exec();
}
