#include <QtGui>
#include "myhandler.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget w;

    QLabel *text = new QLabel("Color Is: ");
    QLabel *val = new QLabel("#000000");
    QPushButton *btn = new QPushButton("Select Color");

    QHBoxLayout *topLayout = new QHBoxLayout;
    topLayout->addWidget(text);
    topLayout->addWidget(val);

    QVBoxLayout *layout = new QVBoxLayout(&w);
    layout->addLayout(topLayout);
    layout->addWidget(btn);

    MyHandler *handler = new MyHandler(val);
    QObject::connect(btn, SIGNAL(clicked()), handler, SLOT(showColorDialog()));

    w.show();
    return app.exec();
}
