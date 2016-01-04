#ifndef TICTACTOEBOARD_H
#define TICTACTOEBOARD_H

#include <QWidget>

class TicTacToeBoard : public QWidget
{
    Q_OBJECT
public:
    explicit TicTacToeBoard(QWidget *parent = 0);

signals:
    void userSelected(int row, int col);

protected:
    void paintEvent(QPaintEvent *);
    void resizeEvent(QResizeEvent *);
    void mousePressEvent(QMouseEvent *);

signals:

public slots:
    void draw(int row, int col, int markType);

private:
    qreal x1, x2, y1, y2;
    int marks[9];
};

#endif // TICTACTOEBOARD_H
