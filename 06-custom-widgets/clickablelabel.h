#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>
#include <QtGui>

class ClickableLabel : public QLabel
{
    Q_OBJECT
public:
    explicit ClickableLabel(QString text, QWidget *parent = 0);

protected:
    void mousePressEvent(QMouseEvent * event);


signals:
    void clicked();

public slots:

};

#endif // CLICKABLELABEL_H
