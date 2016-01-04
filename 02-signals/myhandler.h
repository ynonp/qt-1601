#ifndef MYHANDLER_H
#define MYHANDLER_H

#include <QObject>

class MyHandler : public QObject
{
    Q_OBJECT
public:
    explicit MyHandler(QObject *parent = 0);

signals:
    void valueChanged(int val);

public slots:
    void setValue(int val);
};

#endif // MYHANDLER_H
