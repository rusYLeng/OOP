#include "peripherals.h" // Подключение заголовочного файла
#include <locale>		 // Библиотека для исп. Русского языка
#include <string>		 // Библиотека для исп. типа string

using namespace std;
// Автор: Елин Руслан Вячеславович ИВТ-20

void Peripherals::setName(const string &nameP) // сеттер для указания названия
{
	if (nameP == "" || nameP == " ")
	{
		throw invalid_argument("Укажите название!");
	}
	else name = nameP;
}

string Peripherals::getName()const				// геттер для возврата значения 
{
	return name;
}

void Peripherals::setCon(const string &conP)	// сеттер для указания типа подключения 
{
	if (conP == "" || conP == " ")
	{
		throw invalid_argument("Укажите тип подключения!");
	}
	else con = conP;
}

string Peripherals::getCon()const				// геттер для возврата значнения 
{
	return con;
}

void Peripherals::setPrice(int priceP)			// сеттер для указани цены
{
	if (priceP == 0)
	{
		throw invalid_argument("Укажиите цену!");
	}
	else price = priceP;
}

int Peripherals::getPrice()	// геттер для возврата значения
{	
return price;
}