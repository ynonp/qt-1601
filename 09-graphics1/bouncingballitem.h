#ifndef BOUNCINGBALLITEM_H
#define BOUNCINGBALLITEM_H

#include <QGraphicsItem>

class BouncingBallItem : public QGraphicsItem
{
public:
    explicit BouncingBallItem();

signals:

public slots:


    // QGraphicsItem interface
public:
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    qreal dx, dy;

    // QGraphicsItem interface
public:
    virtual void advance(int phase);
    void bounce();
};

#endif // BOUNCINGBALLITEM_H

















