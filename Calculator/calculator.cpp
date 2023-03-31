#include "calculator.h"

//Автор: Елин Руслан Вячеславович

Calculator::Calculator(){
    this -> x = 0;
    this -> y = 0;
    this -> operation = 1;
}


    void Calculator::set_x (float num1)//задать первое число
    {
        this -> x = num1;
    }

    float Calculator::get_x ()//вернуть первое число
    {
        return x;
    }

    void Calculator::set_y (float num2)//задать второе число
    {
       this -> y = num2;
    }

    float Calculator::get_y ()//вернуть второе число
    {
        return y;
    }

    void Calculator::set_operation(char operat1)//задать операцию
    {
        this->operation = operat1;
    }


    char Calculator::get_operation()//вернуть операцию
    {
        return operation;
    }

    void Calculator::calculate_add ()//вычислить сумму
    {
        this->x = x + y;
    }

    void Calculator::calculate_sub ()//вычислить разницу
    {
         this->x = x - y;
    }

    void Calculator::calculate_mul ()//вычислить произведение
    {
        this->x = x * y;
    }

    void Calculator::calculate_div ()//вычислить частное
    {
        this->x = x / y;
    }

    void Calculator::calculate_sin ()//вычислить синус
    {
        this->x = sin(x);
    }

    void Calculator::calculate_cos ()//вычислить косинус
    {
        this->x = cos(x);
    }

    void Calculator::calculate_tan ()//вычислить тангенс
    {
       this->x = tan(x);
    }

    void Calculator::calculate_ln ()//вычислить натуральный логарифм
    {
        this->x = log(x);
    }

    void Calculator::calculate_pow ()//вычислить квадрат числа
    {
        this->x = pow(x, 2);
    }
    void Calculator::calculate_exp ()//вычислить экспоненту
    {
        this->x = exp(x);
    }

    void Calculator::calculate_eq ()//вычислить при наж. =
    {
        switch(operation) {

        case '+':
            Calculator::calculate_add ();
            break;
        case '-':
            Calculator::calculate_sub();
            break;
        case '*':
            Calculator::calculate_mul();
            break;
        case '/':
            Calculator::calculate_div();
            break;
        }
    }







