#pragma once


/// ����� �������� �������
/** �������� ������ � ������ � ������ ��� ������ � ���
*/
class Dunaeva_Product
{
protected:
	char name; ///������������ ��������
	char proizvod; ///������������� ��������
	int price; ///���� ������
	char srok; ///���� ��������
	int count; ///���������� ������

public:

	/// ����������� �� ���������
	/**������� ����� ��� ������������� �����
	*/
	Dunaeva_Product(void);

	///����������� � ����������� ����������� �������
	/** ������� ����� � ��� ��������
	\param name ������� ������������ ������
	*/
	Dunaeva_Product(char name);

	///����������� � ����������� ����������� �������, ���� ������� �� ��������� ���������
	/** ���������� ������ ������� �� �������� ����
	\param name ������� ������
	\param price ���� ������
	*/
	Dunaeva_Product(char name, int price);


	///���������� ������ �� ����� ��������
	/** �������: ���� �������� ������ ���������
	\param name ������� ������
	\param srok ���� �������� ������
	*/
	Dunaeva_Product(char name, char srok);

	/// ���������� ����������� �������
	~Dunaeva_Product();

};

