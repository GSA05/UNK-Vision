#include "mainwindow.h"
#include "unk.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    UNK main;
    //w.show();
    main.show();

    return a.exec();
}
