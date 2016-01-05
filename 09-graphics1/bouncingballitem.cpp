#include "bouncingballitem.h"
#include <QtGui>

BouncingBallItem::BouncingBallItem():
    dx(2), dy(1)
{
}


QRectF BouncingBallItem::boundingRect() const
{
    return QRectF(0,0,10,10);
}

void BouncingBallItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->drawEllipse(option->rect);
}


void BouncingBallItem::advance(int phase)
{
    if (phase == 1)
    {
        moveBy(dx, dy);
    }
}

void BouncingBallItem::bounce()
{
    qreal old_dx = dx;
    dx = -1 * dy;
    dy = old_dx;
}









