#pragma once
#include "peripherals.h" // подключения наследуемого заголовочного файла

// Автор : Елин Руслан Вячеславович

class Mouse : virtual public Peripherals // класс компьтерная мышь
{

private:
	
	string connector;	// переменная указывающая разъем подключения
	int dpi;			// переменная указывающая максимальную чувствительность мыши
	int quanBut;		// переменная казывающая количество кнопок
	
public:
	
	Mouse();

	void setConnector(const string& connectorM);	// функция ввода разъема подключения
	string getConnector()const;						// функция вывода разъема подлкючения

	void setDpi(int dpiM);							// функция ввода значения чувтсвительности
	int getDpi();									// функция вывода значения чувствительности

	void setQuanBut(int quanButM);					// функция ввода количества кнопок
	int getQuanBut();								// функция вывода значения кнопок

	void setInput();								// функция вывода введенных значений на экран
};

