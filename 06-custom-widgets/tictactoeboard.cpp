#include "tictactoeboard.h"
#include <QtGui>

TicTacToeBoard::TicTacToeBoard(QWidget *parent) :
    QWidget(parent)
{
    for (int i=0; i < 9; i++)
    {
        marks[i] = 0;
    }
}

void TicTacToeBoard::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawLine(x1, 0, x1, rect().height());
    painter.drawLine(x2, 0, x2, rect().height());
    painter.drawLine(0, y1, rect().width(), y1);
    painter.drawLine(0, y2, rect().width(), y2);
}

void TicTacToeBoard::resizeEvent(QResizeEvent *)
{
    x1 = rect().width() / 3;
    x2 = rect().width() * 2/3;
    y1 = rect().height() / 3;
    y2 = rect().height() * 2/3;
}

void TicTacToeBoard::mousePressEvent(QMouseEvent *ev)
{
    qDebug() << ev->posF();
    qreal thirdWidth = rect().width() / 3;
    qreal thirdHeight = rect().height() / 3;

    int col = ev->posF().x() / thirdWidth;
    int row = ev->posF().y() / thirdHeight;

    for (int i=0 ; i < marks; i++ )
    {
        // TODO
    }

    qDebug() << col << row;
    emit userSelected(row, col);
}

void TicTacToeBoard::draw(int row, int col, int markType)
{
    if (((row > 0) && (row < 3)) && ((col > 0) && (col < 3)))
    {
        marks[row * 3 + col] = markType;
    }
    else
    {
        qDebug() << "Invalid Square: " << row << col;
    }
    update();
}












