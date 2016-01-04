#include "myhandler.h"

MyHandler::MyHandler(QObject *parent) :
    QObject(parent)
{
}

void MyHandler::setValue(int val)
{
    emit valueChanged(val * 2);
}
