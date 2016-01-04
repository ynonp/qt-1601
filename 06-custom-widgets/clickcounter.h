#ifndef CLICKCOUNTER_H
#define CLICKCOUNTER_H

#include <QWidget>

namespace Ui {
class ClickCounter;
}

class ClickCounter : public QWidget
{
    Q_OBJECT

public:
    explicit ClickCounter(QWidget *parent = 0);
    ~ClickCounter();

private slots:
    void handleClick();

private:
    int n;
    Ui::ClickCounter *ui;
};

#endif // CLICKCOUNTER_H
