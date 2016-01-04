#include <QtGui>
#include "myhandler.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget w;
    QSpinBox *box = new QSpinBox(&w);
    QSlider *slider = new QSlider(&w);
    QSpinBox *b2 = new QSpinBox(&w);

    MyHandler *handler = new MyHandler(&w);

    QHBoxLayout *layout = new QHBoxLayout(&w);
    layout->addWidget(box);
    layout->addWidget(slider);
    layout->addWidget(b2);

    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     box, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     handler, SLOT(setValue(int)));
    QObject::connect(handler, SIGNAL(valueChanged(int)),
                     b2, SLOT(setValue(int)));

    w.show();
    return app.exec();
}
