#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStandardItemModel *model = new QStandardItemModel(this);
    for (int i=1; i <= 5; i++)
    {
        QList<QStandardItem *>row;
        for (int j=1; j <= 5; j++)
        {
            QStandardItem *item = new QStandardItem(QString::number(i * j));
            row << item;
        }

         model->appendRow(row);
    }
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}
