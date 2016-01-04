#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(handleClick()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{
    QColor result = QColorDialog::getColor();
    ui->label_2->setText(result.name());
    ui->label_2->setStyleSheet("background: " + result.name());
}
