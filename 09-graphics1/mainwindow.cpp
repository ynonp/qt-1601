#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include "triangleitem.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGraphicsScene *scene = new QGraphicsScene;
    TriangleItem *i = new TriangleItem(100, 100);
    scene->addItem(i);
    scene->addRect(100, 100, 100, 100, QColor(Qt::black), QColor(Qt::blue).lighter(130));
    scene->addRect(200, 200, 100, 100, QColor(Qt::black), QColor(Qt::blue).lighter(80));
    i->moveBy(350, 350);

    /*
    if(ball->collidesWithItem(northWall))
    {
        ball->changeDirection();
    }

    scene->collidingItems(i);
    */

    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}
