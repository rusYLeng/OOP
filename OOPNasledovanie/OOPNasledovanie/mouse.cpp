#include "mouse.h"
#include <locale>
#include <string>

using namespace std;
// ����� : ���� ������ ������������ ���-20
Mouse::Mouse()// �����������
{

}

void Mouse::setConnector(const string& connectorM)	// ������ ��� ���� ����������
{
	connector = connectorM;
}
string Mouse::getConnector()const					// ������ 
{
	return connector;
}

void Mouse::setDpi(int dpiM)						// ������ ��� ��������� DPI
{
	dpi = dpiM;
}
int Mouse::getDpi()									// ������
{
	return dpi;
}

void Mouse::setQuanBut(int quanButM)				// ������ ��� ����. ���-�� ������
{
	quanBut = quanButM;
}
int Mouse::getQuanBut()								// ������
{
	return quanBut;
}

void Mouse::setInput()
{
	cout << "�������� ��������: " << name << endl;

	cout << "����: " << price << endl;

	cout << "��� �����������: " << con << endl;

	cout << "������ �����������: " << connector << endl;

	cout << "������������ ����������������: " << dpi << "dpi" << endl;

	cout << "��������� ������: " << quanBut << endl;
}