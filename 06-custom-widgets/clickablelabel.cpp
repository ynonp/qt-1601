#include "clickablelabel.h"
#include <QDebug>

ClickableLabel::ClickableLabel(QString text, QWidget *parent) :
    QLabel(text, parent)
{
}

void ClickableLabel::mousePressEvent(QMouseEvent *event)
{
    QLabel::mousePressEvent(event);
    qDebug() << "Ouch!";
    emit clicked();

    event->accept();
}
