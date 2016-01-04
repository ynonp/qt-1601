#include "coolwiddget.h"
#include <QtGui>

CoolWiddget::CoolWiddget(QWidget *parent) :
    QWidget(parent)
{
    setMinimumSize(50, 50);
}


void CoolWiddget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setBrush(Qt::blue);
    painter.drawRect(rect());
    painter.setBrush(Qt::yellow);
    painter.drawRect(rect().adjusted(20, 20, -20, -20));
    painter.drawText(rect().center(), QString::number(r));
}

void CoolWiddget::mousePressEvent(QMouseEvent *)
{
    r = qrand();
    update();
}
