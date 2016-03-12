#ifndef UNK_H
#define UNK_H

#include <QMainWindow>
#include "model.h"

namespace Ui {
class UNK;
}

class UNK : public QMainWindow
{
    Q_OBJECT

public:
    explicit UNK(QWidget *parent = 0);
    ~UNK();

private:
    Ui::UNK *ui;
    Model *current_model;
};

#endif // UNK_H
