#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
//Автор: Елин Руслан Вячеславович

class Calculator
{

private:

   float x, y;
   char operation;

public:



   Calculator();
   void set_x (float num1); //задать первое число
   float get_x ();//вернуть первое число

   void set_y (float num2);//задать второе число
   float get_y ();//вернуть второе число

   void set_operation(char operat1);//задать операцию
   char get_operation();//вернуть операцию

   void calculate_add ();//вычислить сумму
   void calculate_sub ();//вычислить разность
   void calculate_mul ();//вычислить произведение
   void calculate_div ();//вычислить частное
   void calculate_sin ();//вычислить синус
   void calculate_cos ();//вычислить косинус
   void calculate_tan ();//вычислить тангенс
   void calculate_ln ();//вычислить натуральный логарифм
   void calculate_pow ();//вычислить квадрат числа
   void calculate_exp ();//вычислить экспоненту
   void calculate_eq ();//вычислить при наж. =




};

#endif // CALCULATOR_H
