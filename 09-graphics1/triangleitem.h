#ifndef TRIANGLEITEM_H
#define TRIANGLEITEM_H

#include <QGraphicsItem>
#include <QtGui>

class TriangleItem : public QGraphicsItem
{
public:
    TriangleItem(qreal w, qreal h);

    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);

private:
    qreal m_w, m_h;
    qreal m_angle;
};

#endif // TRIANGLEITEM_H
