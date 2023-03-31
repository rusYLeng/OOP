#include <iostream>         
#include <locale>           // библиотека подключения Русского языка
#include <string>           // библиотека для исп. типа string
#include "peripherals.h"    // подключение заголовочного файла 
#include "monitor.h"        // подключение заголовочного файла
#include "mouse.h"          // подключение заголовочного файла
#include <Windows.h>        // библиотека для работы с консолью
using namespace std;

string nameP;       //переменная для указ. названия 
string typeMatM;    //переменная для указ. типа матрицы монитора
string conP;        //переменная для указ. типа подключения 
string connectorM;  //переменная для указ. разъема подключения мыши
int priceP;         //переменная для указ. цены
float diagM;        //переменная для указ. диагонали монитора
int rateHzM;        //переменная для указ. частоты обновления монитора
int dpiM;           //переменная для указ. максимальной чувствительности мыши
int quanButM;       //переменная для указ. количества кнопок мыши
int output;         //переменная для вывода данных на экран

int main() 
{
    SetConsoleCP(1251);                         //
    SetConsoleOutputCP(1251);                   // локализация на Русский язык
    setlocale(LC_ALL, "Rus");                   //
    do
    {
        cout << "Выберите комплектующее:\n"; 
        cout << "1. Монитор\n";
        cout << "2. Мышь\n";
        cin >> output;
        switch (output)
        {
        case 1:
        {
            system("cls");
            cout << "Название продукта: ";
            cin >> nameP;

            cout << "Цена: ";
            cin >> priceP;

            cout << "Тип подключения: ";
            cin >> conP;

            cout << "Тип матрицы: ";
            cin >> typeMatM;

            cout << "Диагональ: ";
            cin >> diagM;

            cout << "Герцовка: ";
            cin >> rateHzM;
            Monitor monitor1;
            monitor1.setCon(conP);
            monitor1.setDiag(diagM);
            monitor1.setName(nameP);
            monitor1.setPrice(priceP);
            monitor1.setRateHz(rateHzM);
            monitor1.setTypeMat(typeMatM);
            system("cls");
            monitor1.output();
            break;
        }
        case 2:
        {
            system("cls");
            cout << "Название продукта: ";
            cin >> nameP;

            cout << "Цена: ";
            cin >> priceP;

            cout << "Тип подключения: ";
            cin >> conP;

            cout << "Разъем подключения: ";
            cin >> connectorM;

            cout << "Максимальная чувствительность: ";
            cin >> dpiM;

            cout << "Количество кнопок: ";
            cin >> quanButM;
            system("cls");
            Mouse mouse1;
            mouse1.setCon(conP);
            mouse1.setDpi(dpiM);
            mouse1.setName(nameP);
            mouse1.setPrice(priceP);
            mouse1.setQuanBut(quanButM);
            mouse1.setConnector(connectorM);
            system("cls");
            mouse1.setInput();
            break;
        }
        default:
            system("cls");
            cout << "Нет такого вырианта\n";
            break;
        }
    } 
    while (output < 1 || output > 2);
    return 0;
    
}
