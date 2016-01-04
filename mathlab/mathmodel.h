#ifndef MATHMODEL_H
#define MATHMODEL_H

#include <QAbstractTableModel>
#include <QtCore>

class MathModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit MathModel(int size, QObject *parent = 0);

signals:

public slots:


    // QAbstractItemModel interface
public:
    virtual int rowCount(const QModelIndex &parent) const;
    virtual int columnCount(const QModelIndex &parent) const;
    virtual QVariant data(const QModelIndex &index, int role) const;
    virtual bool setData(const QModelIndex &index, const QVariant &value, int role);
    virtual Qt::ItemFlags flags(const QModelIndex &index) const;


private:
    QList<int> m_firstColumn;
};

#endif // MATHMODEL_H
