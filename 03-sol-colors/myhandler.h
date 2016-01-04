#ifndef MYHANDLER_H
#define MYHANDLER_H

#include <QObject>
class QLabel;

class MyHandler : public QObject
{
    Q_OBJECT
public:
    explicit MyHandler(QLabel *target, QObject *parent = 0);

signals:
    void valueChanged(QString color);

public slots:
    void showColorDialog();

private:
    QLabel *_target;
};

#endif // MYHANDLER_H
