#include <QtGui>
#include "mydelegate.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QFileSystemModel m;
    m.setRootPath("/home/ynon");
    QModelIndex idx = m.index("/home/ynon");

    QStandardItemModel items;
    QStandardItem *a = new QStandardItem("0,0");
    QStandardItem *b = new QStandardItem("1,0");
    QStandardItem *c = new QStandardItem("2,0");
    QList<QStandardItem *>r1;
    r1 << a << b << c;

    QStandardItem *d = new QStandardItem("0,1");
    QStandardItem *e = new QStandardItem("1,1");
    QStandardItem *f = new QStandardItem("2,1");
    QList<QStandardItem *>r2;
    r2 << d << e << f;

    d->setData(Qt::red, Qt::DecorationRole);
    e->setEditable(false);
    items.appendRow(r1);
    items.appendRow(r2);

    QTableView tav;
    tav.setModel(&items);

    // tav.setRootIndex(idx);
    tav.show();
    MyDelegate *myDelegate = new MyDelegate();
    tav.setItemDelegateForColumn(0, myDelegate);
    return app.exec();
}
