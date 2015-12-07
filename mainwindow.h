#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QtSql>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void showError(const QSqlError &err);
    Ui::MainWindow *ui;
    QSqlRelationalTableModel *model;
    int authorIdx, genreIdx;
};

#endif // MAINWINDOW_H
