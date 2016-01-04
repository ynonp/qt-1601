#include "mathmodel.h"
#include <QtGui>

MathModel::MathModel(int size, QObject *parent) :
    QAbstractTableModel(parent)
{
    for (int i=1; i<=size;i++)
    {
        m_firstColumn << i;
    }
}


int MathModel::rowCount(const QModelIndex &parent) const
{
    return m_firstColumn.size();
}

int MathModel::columnCount(const QModelIndex &parent) const
{
    return m_firstColumn.size();
}

QVariant MathModel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        return m_firstColumn.at(index.row()) * (index.column() + 1);
    }
    else if ( role == Qt::DecorationRole )
    {
        return QColor(Qt::blue).lighter(m_firstColumn.at(index.row()) * 20 + 30);
    }
    return QVariant();
}

bool MathModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    bool ok = false;
    int val = value.toInt(&ok);
    if (ok)
    {
        m_firstColumn[index.row()] = val;
    }
    return ok;
}

Qt::ItemFlags MathModel::flags(const QModelIndex &index) const
{
    if (index.column() == 0)
    {
        return QAbstractTableModel::flags(index) | Qt::ItemIsEditable;
    }
    else
    {
        return QAbstractTableModel::flags(index);
    }
}
