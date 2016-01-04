#include "clickcounter.h"
#include "ui_clickcounter.h"
#include <QtGui>

ClickCounter::ClickCounter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClickCounter),
    n(0)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(handleClick()));
}

ClickCounter::~ClickCounter()
{
    delete ui;
}

void ClickCounter::handleClick()
{
    ui->res->setText(QString::number(++n));
}
