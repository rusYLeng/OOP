#include "monitor.h"		// ����������� ������������� �����
#include <locale>			// ���������� ��� ���. �������� �����
#include <string>			// ���������� ��� ���. ���� string
#include <iomanip>

using namespace std;
Monitor::Monitor() // �����������
{

}

void Monitor::setTypeMat(const string& typeMatM)	// ������ ��� ���� ������� 
{
	typeMat = typeMatM;
}	
string Monitor::getTypeMat()const					// ������ ��� �������� ��������
{
	return typeMat;
}


void Monitor::setDiag(float diagM)					// ������ ��� ��������� ��������
{
	diag = diagM;
}
float Monitor::getDiag()							// ������ ��� �������� ��������
{
	return diag;
}


void Monitor::setRateHz(int rateHzM)				// ������ ��� �������� �������� 
{
	rateHz = rateHzM;
}


int Monitor::getRateHz()							// ������ ��� �������� �������� 
{
	return rateHz;
}

void Monitor::output()							//������ ������ � �������
{
	cout << "�������� ��������: " << name << endl;
	
	cout << "����: " << price << endl;

	cout << "��� �����������: " << con << endl;

	cout << "��� �������: " << typeMat << endl;

	cout << fixed;
	cout.precision(1);
	cout << "���������: " << diag << endl;

	cout << "��������: " << rateHz << "Hz'" << endl;
}
