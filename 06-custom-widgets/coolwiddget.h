#ifndef COOLWIDDGET_H
#define COOLWIDDGET_H

#include <QWidget>

class CoolWiddget : public QWidget
{
    Q_OBJECT
public:
    explicit CoolWiddget(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent * event);

    void mousePressEvent(QMouseEvent *);
signals:

public slots:

private:
    qreal r;

};

#endif // COOLWIDDGET_H
