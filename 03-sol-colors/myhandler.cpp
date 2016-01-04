#include "myhandler.h"
#include <QtGui>
#include <QtDebug>
#include <QtGui/QLabel>

MyHandler::MyHandler(QLabel *target, QObject *parent) :
    QObject(parent),
    _target(target)
{
}

void MyHandler::showColorDialog()
{
    QColor result = QColorDialog::getColor();
    qDebug() << "Color: " << result;
    _target->setText(result.name());
    _target->setStyleSheet("background:" + result.name());
}
