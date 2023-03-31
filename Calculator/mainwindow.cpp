#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>

//Автор: Елин Руслан ИВТ-20

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


void MainWindow::on_pushButton_0_clicked()
{
    if (ui -> lineEdit -> text() != "0") ui -> lineEdit -> insert("0");
}


void MainWindow::on_pushButton_1_clicked()
{
    if (ui -> lineEdit -> text() == "0") ui -> lineEdit -> setText("");
    ui -> lineEdit -> insert("1");
}


void MainWindow::on_pushButton_2_clicked()
{
    if (ui -> lineEdit -> text() == "0") ui -> lineEdit -> setText("");
    ui -> lineEdit -> insert("2");
}


void MainWindow::on_pushButton_3_clicked()
{
    if (ui -> lineEdit -> text() == "0") ui -> lineEdit -> setText("");
    ui -> lineEdit -> insert("3");
}


void MainWindow::on_pushButton_4_clicked()
{
    if (ui -> lineEdit -> text() == "0") ui -> lineEdit -> setText("");
    ui -> lineEdit -> insert("4");
}


void MainWindow::on_pushButton_5_clicked()
{
    if (ui -> lineEdit -> text() == "0") ui -> lineEdit -> setText("");
    ui -> lineEdit -> insert("5");
}


void MainWindow::on_pushButton_6_clicked()
{
    if (ui -> lineEdit -> text() == "0") ui -> lineEdit -> setText("");
    ui -> lineEdit -> insert("6");
}


void MainWindow::on_pushButton_7_clicked()
{
    if (ui -> lineEdit -> text() == "0") ui -> lineEdit -> setText("");
    ui -> lineEdit -> insert("7");
}


void MainWindow::on_pushButton_8_clicked()
{
    if (ui -> lineEdit -> text() == "0") ui -> lineEdit -> setText("");
    ui -> lineEdit -> insert("8");
}


void MainWindow::on_pushButton_9_clicked()
{
    if (ui -> lineEdit -> text() == "0") ui -> lineEdit -> setText("");
    ui -> lineEdit -> insert("9");
}


void MainWindow::on_pushButton_dot_clicked()//кнопка "."
{

    if (!(ui->lineEdit->text().contains("."))) ui->lineEdit->insert(".");

}


void MainWindow::on_pushButton_ce_clicked()//кнопка "СЕ"
{
    ui -> lineEdit -> setText("0");
    calc1.set_x(0);
    calc1.set_y(0);

}


void MainWindow::on_pushButton_equals_clicked()//кнопка "="
{
    if (calc1.get_operation() != '1')
        {
            calc1.set_y(ui->lineEdit->text().toFloat());
            calc1.calculate_eq();
            ui->lineEdit->setText(QString::number(calc1.get_x()));
            calc1.set_operation('1');
        }

}


void MainWindow::on_pushButton_sin_clicked()//кнопка "sin"
{
    if (ui->lineEdit->text() != "0")
        {
            calc1.set_x(ui->lineEdit->text().toFloat());
            calc1.calculate_sin();
            ui->lineEdit->setText(QString::number(calc1.get_x()));
        }


}


void MainWindow::on_pushButton_cos_clicked()//кнопка "cos"
{
    if (ui->lineEdit->text() != "0")
        {
            calc1.set_x(ui->lineEdit->text().toFloat());
            calc1.calculate_cos();
            ui->lineEdit->setText(QString::number(calc1.get_x()));
        }


}


void MainWindow::on_pushButton_tan_clicked()//кнопка "tan"
{
    if (ui->lineEdit->text() != "0")
        {
            calc1.set_x(ui->lineEdit->text().toFloat());
            calc1.calculate_tan();
            ui->lineEdit->setText(QString::number(calc1.get_x()));
        }


}


void MainWindow::on_pushButton_ln_clicked()//кнопка "ln"
{
    if (ui->lineEdit->text() != "0")
        {
            calc1.set_x(ui->lineEdit->text().toFloat());
            calc1.calculate_ln();
            ui->lineEdit->setText(QString::number(calc1.get_x()));
        }


}


void MainWindow::on_pushButton_power_clicked()//кнопка "pow"
{
    if (ui->lineEdit->text() != "0")
        {
            calc1.set_x(ui->lineEdit->text().toFloat());
            calc1.calculate_pow();
            ui->lineEdit->setText(QString::number(calc1.get_x()));
        }

}


void MainWindow::on_pushButton_exp_clicked()//кнопка "exp"
{
    if (ui->lineEdit->text() != "0")
        {
            calc1.set_x(ui->lineEdit->text().toFloat());
            calc1.calculate_exp();
            ui->lineEdit->setText(QString::number(calc1.get_x()));
        }


}


void MainWindow::on_pushButton_plus_clicked()//кнопка "+"
{

    if (ui->lineEdit->text() != "0")
        {
            if (calc1.get_operation() != '1')
            {
                    calc1.set_y(ui->lineEdit->text().toFloat());
                    ui->lineEdit->setText("0");
                    calc1.calculate_add();
                    calc1.set_operation('+');
            }
            else
            {
                calc1.set_x(ui->lineEdit->text().toFloat());
                ui->lineEdit->setText("0");
                calc1.set_operation('+');
            }
        }

}


void MainWindow::on_pushButton_minus_clicked()//кнопка "-"
{
    if (ui->lineEdit->text() != "0")
        {
            if (calc1.get_operation() != '1')
            {
                    calc1.set_y(ui->lineEdit->text().toFloat());
                    ui->lineEdit->setText("0");
                    calc1.calculate_sub();
                    calc1.set_operation('-');
            }
            else
            {
                calc1.set_x(ui->lineEdit->text().toFloat());
                ui->lineEdit->setText("0");
                calc1.set_operation('-');
            }
        }


}


void MainWindow::on_pushButton_multipl_clicked()//кнопка "*"
{
    if (ui->lineEdit->text() != "0")
        {
            if (calc1.get_operation() != '1')
            {
                    calc1.set_y(ui->lineEdit->text().toFloat());
                    ui->lineEdit->setText("0");
                    calc1.calculate_mul();
                    calc1.set_operation('*');
            }
            else
            {
                calc1.set_x(ui->lineEdit->text().toFloat());
                ui->lineEdit->setText("0");
                calc1.set_operation('*');
            }
        }

}


void MainWindow::on_pushButton_division_clicked()//кнопка "/"
{
    if (ui->lineEdit->text() != "0")
        {
            if (calc1.get_operation() != '1')
            {
                    calc1.set_y(ui->lineEdit->text().toFloat());
                    ui->lineEdit->setText("0");
                    calc1.calculate_div();
                    calc1.set_operation('/');
            }
            else
            {
                calc1.set_x(ui->lineEdit->text().toFloat());
                ui->lineEdit->setText("0");
                calc1.set_operation('/');
            }
        }

}

