#pragma once
#include "peripherals.h"

// Автор : Елин Руслан Вячеславович ИВТ-20

class Monitor : virtual public Peripherals // класс монитор
{

private:

	string typeMat; // переменная для указ. типа матрицы 
	float diag;		// переменная для указ. диагонали монитора
	int rateHz;		// переменная для указ. частоты обновления монитора


public:
	Monitor();	// конструктор 
	// ввод данных в конструктор
	//Monitor(int priceP,const string& conP,const string& nameP,const string& typeMatM, float diagM, int rateHzM);
	
	void setTypeMat(const string& typeMatM);// функция ввода типа матрицы
	string getTypeMat()const;				// функция вывода типа матрицы  

	void setDiag(float diagM);				// функция ввода диагонали монитора
	float getDiag();						// функция вывода диагонали монитора

	void setRateHz(int rateHzM);			// функция ввода частоты обновления монитора
	int getRateHz();						// функция вывода частоты обновления монитора

	

	void output();						// функция вывода информации на экран

};


