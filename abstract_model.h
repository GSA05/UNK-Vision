#ifndef ABSTRACT_MODEL_H
#define ABSTRACT_MODEL_H

#include <QObject>

class abstract_model : public QObject
{
    Q_OBJECT
public:
    explicit abstract_model(QObject *parent = 0);

signals:

public slots:

};

#endif // ABSTRACT_MODEL_H
