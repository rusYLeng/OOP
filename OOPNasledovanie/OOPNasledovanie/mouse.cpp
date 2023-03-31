#include "mouse.h"
#include <locale>
#include <string>

using namespace std;
// Автор : Елин Руслан Вячеславович ИВТ-20
Mouse::Mouse()// конструктор
{

}

void Mouse::setConnector(const string& connectorM)	// сеттер для типа коннектора
{
	connector = connectorM;
}
string Mouse::getConnector()const					// геттер 
{
	return connector;
}

void Mouse::setDpi(int dpiM)						// сеттер для установки DPI
{
	dpi = dpiM;
}
int Mouse::getDpi()									// геттер
{
	return dpi;
}

void Mouse::setQuanBut(int quanButM)				// сеттер для указ. кол-ва кнопок
{
	quanBut = quanButM;
}
int Mouse::getQuanBut()								// геттер
{
	return quanBut;
}

void Mouse::setInput()
{
	cout << "Название продукта: " << name << endl;

	cout << "Цена: " << price << endl;

	cout << "Тип подключения: " << con << endl;

	cout << "Разъем подключения: " << connector << endl;

	cout << "Максимальная чувствительность: " << dpi << "dpi" << endl;

	cout << "Количесво кнопок: " << quanBut << endl;
}