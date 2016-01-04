#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include "mathmodel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MathModel *model = new MathModel(5, this);
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}
