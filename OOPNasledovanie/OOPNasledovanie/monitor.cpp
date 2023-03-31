#include "monitor.h"		// Подключение заголовочного файла
#include <locale>			// Библиотека для исп. Русского языка
#include <string>			// Библиотека для исп. типа string
#include <iomanip>

using namespace std;
Monitor::Monitor() // конструктор
{

}

void Monitor::setTypeMat(const string& typeMatM)	// сеттер для типа матрицы 
{
	typeMat = typeMatM;
}	
string Monitor::getTypeMat()const					// геттер для возврата значений
{
	return typeMat;
}


void Monitor::setDiag(float diagM)					// сеттер для диаганали монитора
{
	diag = diagM;
}
float Monitor::getDiag()							// геттер для возврата значений
{
	return diag;
}


void Monitor::setRateHz(int rateHzM)				// сеттер для герцовки монитора 
{
	rateHz = rateHzM;
}


int Monitor::getRateHz()							// геттер для возврата значений 
{
	return rateHz;
}

void Monitor::output()							//вывода данных в консоль
{
	cout << "Название продукта: " << name << endl;
	
	cout << "Цена: " << price << endl;

	cout << "Тип подключения: " << con << endl;

	cout << "Тип матрицы: " << typeMat << endl;

	cout << fixed;
	cout.precision(1);
	cout << "Диагональ: " << diag << endl;

	cout << "Герцовка: " << rateHz << "Hz'" << endl;
}
