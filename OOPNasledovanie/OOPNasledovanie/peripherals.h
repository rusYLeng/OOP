#pragma once
#include <iostream>

using namespace std;
// Автор: Елин Руслан Вячеславович ИВТ-20

class Peripherals   // класс компьютерная периферия 
{
protected:
	

	string name;			// переменная для название комплектующего
	string con;				// переменная для указания типа соединения
	int price;				// переиенная для указания цены комплектующего


public: 


	void setName(const string& nameP);		// функция ввода имени
	string getName()const;					// функция вывода имени

	void setCon(const string& conP);		// функция ввода типа подключения
	string getCon()const;					// функция вывода типа подключения

	void setPrice(int priceP);				// функция ввода цены
	int getPrice();							// функция вывода цены
};

