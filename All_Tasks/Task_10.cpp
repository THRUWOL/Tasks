#include "Header.h"

int tenth() {
	setlocale(LC_ALL, "Russian");

	double number, oldnumber, power;

	std::cout << "������� �����: "; std::cin >> number;
	oldnumber = number;
	std::cout << "\n������� �������: "; std::cin >> power;

	//���� ������� �������������
	if (power > 0) {
		for (int i = 1; i < power; i++) {
			number = number * oldnumber;
		}
		std::cout << "\n�����: " << number << std::endl;
	}

	//���� ������� �������������
	else if (power < 0) {
		if (number == 0) std::cout << "�� ���� ������ ������" << std::endl;
		else {
			power = power * (-1);
			for (int i = 1; i < power; i++) {
				number = number * oldnumber;
			}
			number = 1 / number;
			std::cout << "\n�����: " << number << std::endl;
		}
	}

	//���� ������� ����� ����
	else if (power == 0) {
		number = 1;
		std::cout << "\n�����: " << number << std::endl;
	}

	return 0;
}