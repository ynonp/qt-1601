#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
class QGraphicsItem;
#include <QtGui>
#include "bouncingballitem.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void timeout();


private:
    Ui::MainWindow *ui;

    QList<QGraphicsItem *> m_walls;
    BouncingBallItem *m_ball;
    QGraphicsScene *m_scene;
    QTimer m_timer;
};

#endif // MAINWINDOW_H
