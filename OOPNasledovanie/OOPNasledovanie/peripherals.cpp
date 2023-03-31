#include "peripherals.h" // ����������� ������������� �����
#include <locale>		 // ���������� ��� ���. �������� �����
#include <string>		 // ���������� ��� ���. ���� string

using namespace std;
// �����: ���� ������ ������������ ���-20

void Peripherals::setName(const string &nameP) // ������ ��� �������� ��������
{
	if (nameP == "" || nameP == " ")
	{
		throw invalid_argument("������� ��������!");
	}
	else name = nameP;
}

string Peripherals::getName()const				// ������ ��� �������� �������� 
{
	return name;
}

void Peripherals::setCon(const string &conP)	// ������ ��� �������� ���� ����������� 
{
	if (conP == "" || conP == " ")
	{
		throw invalid_argument("������� ��� �����������!");
	}
	else con = conP;
}

string Peripherals::getCon()const				// ������ ��� �������� ��������� 
{
	return con;
}

void Peripherals::setPrice(int priceP)			// ������ ��� ������� ����
{
	if (priceP == 0)
	{
		throw invalid_argument("�������� ����!");
	}
	else price = priceP;
}

int Peripherals::getPrice()	// ������ ��� �������� ��������
{	
return price;
}