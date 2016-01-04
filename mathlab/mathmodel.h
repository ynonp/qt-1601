#ifndef MATHMODEL_H
#define MATHMODEL_H

#include <QAbstractTableModel>

class MathModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit MathModel(QObject *parent = 0);

signals:

public slots:

};

#endif // MATHMODEL_H
