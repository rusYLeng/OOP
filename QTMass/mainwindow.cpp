#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "calc.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_create_clicked()
{
    srand(time(NULL));
    n = ui->lineEdit_n->text().toFloat();
    ui->plainTextEdit->appendPlainText("Полученный массив:\n");

    create_massiv();
    output_array();
    ui->plainTextEdit->appendPlainText(s);

}
//Автор: Елин Руслан Вячеславович
