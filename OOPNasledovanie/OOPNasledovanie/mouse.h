#pragma once
#include "peripherals.h" // ����������� ������������ ������������� �����

// ����� : ���� ������ ������������

class Mouse : virtual public Peripherals // ����� ����������� ����
{

private:
	
	string connector;	// ���������� ����������� ������ �����������
	int dpi;			// ���������� ����������� ������������ ���������������� ����
	int quanBut;		// ���������� ���������� ���������� ������
	
public:
	
	Mouse();

	void setConnector(const string& connectorM);	// ������� ����� ������� �����������
	string getConnector()const;						// ������� ������ ������� �����������

	void setDpi(int dpiM);							// ������� ����� �������� ����������������
	int getDpi();									// ������� ������ �������� ����������������

	void setQuanBut(int quanButM);					// ������� ����� ���������� ������
	int getQuanBut();								// ������� ������ �������� ������

	void setInput();								// ������� ������ ��������� �������� �� �����
};

