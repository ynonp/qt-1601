#include <QtGui>
#include <QtCore>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "triangleitem.h"
#include "bouncingballitem.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_scene = new QGraphicsScene;
    m_ball = new BouncingBallItem;

    QGraphicsItem *w1 = new QGraphicsRectItem(0, 0, 220, 20);
    QGraphicsItem *w2 = new QGraphicsRectItem(0, 0, 220, 20);
    QGraphicsItem *w3 = new QGraphicsRectItem(0, 0, 20, 220);
    QGraphicsItem *w4 = new QGraphicsRectItem(0, 0, 20, 220);

    m_walls << w1 << w2 << w3 << w4;
    m_scene->addItem(w1);
    m_scene->addItem(w2);
    m_scene->addItem(w3);
    m_scene->addItem(w4);


    w2->moveBy(0, 200);
    w4->moveBy(200, 0);
    m_ball->moveBy(100, 100);
    m_scene->addItem(m_ball);

    ui->graphicsView->setScene(m_scene);
    m_timer.setInterval(5);
    m_timer.start();
    QObject::connect(&m_timer, SIGNAL(timeout()), this, SLOT(timeout()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    foreach (QGraphicsItem *wall, m_walls)
    {
        if (m_ball->collidesWithItem(wall))
        {
            m_ball->bounce();
            break;
        }
    }

    m_scene->advance();
}
















