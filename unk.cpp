#include "unk.h"
#include "ui_unk.h"

UNK::UNK(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UNK)
{
    ui->setupUi(this);
}

UNK::~UNK()
{
    delete ui;
}
