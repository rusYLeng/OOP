#pragma once
#include <iostream>

using namespace std;
// �����: ���� ������ ������������ ���-20

class Peripherals   // ����� ������������ ��������� 
{
protected:
	

	string name;			// ���������� ��� �������� ��������������
	string con;				// ���������� ��� �������� ���� ����������
	int price;				// ���������� ��� �������� ���� ��������������


public: 


	void setName(const string& nameP);		// ������� ����� �����
	string getName()const;					// ������� ������ �����

	void setCon(const string& conP);		// ������� ����� ���� �����������
	string getCon()const;					// ������� ������ ���� �����������

	void setPrice(int priceP);				// ������� ����� ����
	int getPrice();							// ������� ������ ����
};

