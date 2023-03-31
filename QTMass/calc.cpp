#include<math.h>
#include "calc.h"
#include<QString>

void create_massiv(int *mas, int n) //создание массива
{
    for(int i = 0; i < n; i++){

            mas[i] = (rand() % 21) - 10;
    }

}

void output_array(int *mas, int n, QString s) // вывод массива
{
    for(int i = 0; i < n; i++){

        s += QString::number(mas[i]) + " ";

    }

}
//Автор: Елин Руслан Вячеславович
