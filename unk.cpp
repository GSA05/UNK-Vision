#include "unk.h"
#include "ui_unk.h"

UNK::UNK(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UNK)
{
    ui->setupUi(this);
    QStringList headers;
    headers << tr("Title");
    current_model = new Model(headers,"123\n    231\n    345\n");
    ui->treeView->setModel(current_model);
}

UNK::~UNK()
{
    delete ui;
}
