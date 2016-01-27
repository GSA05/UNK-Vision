#ifndef UNK_H
#define UNK_H

#include <QMainWindow>

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
};

#endif // UNK_H
