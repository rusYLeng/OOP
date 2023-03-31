#pragma once
#include "peripherals.h"

// ����� : ���� ������ ������������ ���-20

class Monitor : virtual public Peripherals // ����� �������
{

private:

	string typeMat; // ���������� ��� ����. ���� ������� 
	float diag;		// ���������� ��� ����. ��������� ��������
	int rateHz;		// ���������� ��� ����. ������� ���������� ��������


public:
	Monitor();	// ����������� 
	// ���� ������ � �����������
	//Monitor(int priceP,const string& conP,const string& nameP,const string& typeMatM, float diagM, int rateHzM);
	
	void setTypeMat(const string& typeMatM);// ������� ����� ���� �������
	string getTypeMat()const;				// ������� ������ ���� �������  

	void setDiag(float diagM);				// ������� ����� ��������� ��������
	float getDiag();						// ������� ������ ��������� ��������

	void setRateHz(int rateHzM);			// ������� ����� ������� ���������� ��������
	int getRateHz();						// ������� ������ ������� ���������� ��������

	

	void output();						// ������� ������ ���������� �� �����

};


