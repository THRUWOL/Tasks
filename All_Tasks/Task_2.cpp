#include "Header.h"

int second() {
	setlocale(LC_ALL, "Russian");

	std::cout << "�2.���������� int � double\n\n";

	int first_int = 3, second_int = 3.14;
	double first_double = 3, second_double = 3.14;

	std::cout << "������������� ����������:\n" << "1. " << first_int << "\n" << "2. " << second_int << "\n";
	std::cout << "������� ����������:\n" << "1. " << first_double << "\n" << "2. " << second_double << "\n\n";
	/* � ������ � ����������  �������� ����� 3.14 ������������� ���������� second_inta
	�� ����� ��������� �� 3.14, � 3, � ����� � ���, ��� ���� ���������� secont_int ����������� ������� ����� ����� 3.14.
	��� ��� int �� ��� ����������� ������� �����, � ������� �� double.*/

	return 0;
}