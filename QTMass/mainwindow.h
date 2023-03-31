#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "calc.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_create_clicked();
    void create_massiv();
    void output_array();

private:
    int n, i;
    int* mas = new int[100];
    QString s;

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
//Автор: Елин Руслан Вячеславович
