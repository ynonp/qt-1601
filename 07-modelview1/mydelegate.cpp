#include "mydelegate.h"
#include <QtGui>

MyDelegate::MyDelegate(QObject *parent) :
    QItemDelegate(parent)
{
}

QWidget *MyDelegate::createEditor(QWidget *parent,
                                  const QStyleOptionViewItem &option,
                                  const QModelIndex &index) const
{
    QComboBox *editor = new QComboBox(parent);
    QStringList items;
    // index.model();

    items << "foo" << "bar" << "buz";
    editor->addItems(items);
    return editor;
}

void MyDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    bool o;
    int idx = index.data(Qt::EditRole).toInt(&o);
    if (o)
    {
        QComboBox *e = qobject_cast<QComboBox *>(editor);
        e->setCurrentIndex(idx);
    }

}

void MyDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QComboBox *e = qobject_cast<QComboBox *>(editor);
    model->setData(index, e->currentIndex(), Qt::EditRole);
}

void MyDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}
