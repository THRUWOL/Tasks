#include "Header.h"

int twelve() {
	setlocale(LC_ALL, "Russian");

	int number; //�������� �����
	bool prime = true;
	std::cout << "������� ����� ������������� �����: ";
	std::cin >> number;

	if (number > 1) {
		for (int i = 2; i < number; i++)
		{
			if (number % i == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime)
			std::cout << "�������" << std::endl;
		else
			std::cout << "��������� " << std::endl;
	}
	else std::cout << "� �� ���������, � �� �������\n";

	return 0;
}