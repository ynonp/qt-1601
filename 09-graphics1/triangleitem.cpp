#include "triangleitem.h"

TriangleItem::TriangleItem(qreal w, qreal h):
    m_w(w), m_h(h), m_angle(0)
{
}


QRectF TriangleItem::boundingRect() const
{
    return QRectF(0, 0, m_w, m_h);
}

void TriangleItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::red);
    painter->fillRect(option->rect, Qt::gray);
    painter->drawLine(m_w / 2, 0, 0, m_h);
    painter->drawLine(m_w / 2, 0, m_w, m_h);
    painter->drawLine(0, m_h, m_w, m_h);
}

void TriangleItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    rotate(10);
}










