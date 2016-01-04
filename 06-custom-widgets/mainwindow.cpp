#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "keysfilter.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    KeysFilter *filter = new KeysFilter(this);
    ui->countedTextedit1->installEventFilterOnTextedit(filter);
    qDebug() << "Start";

}

MainWindow::~MainWindow()
{
    delete ui;
}
