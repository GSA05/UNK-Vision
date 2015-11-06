#ifndef ABSTRACT_SHAPE_H
#define ABSTRACT_SHAPE_H

#include <QObject>

class abstract_shape : public QObject
{
    Q_OBJECT
public:
    explicit abstract_shape(QObject *parent = 0);

signals:

public slots:

};

#endif // ABSTRACT_SHAPE_H
