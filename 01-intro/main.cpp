
#include <QtCore/QDebug>
#include <QtGui/QApplication>
#include <QtGui/QVBoxLayout>
#include <QtGui/QLabel>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget w;
    QLabel *l1 = new QLabel("Hello!");
    QLabel *l2 = new QLabel("World!");

    QVBoxLayout *layout = new QVBoxLayout(&w);
    layout->addWidget(l1);
    layout->addWidget(l2);

    QLabel otherWindow("Motherless Child");
    otherWindow.show();
    w.show();

    return app.exec();
}
