#include "Header.h"

int eight() {
	setlocale(LC_ALL, "Russian");

	double a, b;
	char input_8 = '1';

	std::cout << "������� �����������.\n\n";

	std::cout << "������� ������: ";
	std::cin >> a >> input_8 >> b;

	if (input_8 == '+' || input_8 == '-' || input_8 == '*' || input_8 == '/') {

		switch (input_8) {
		case '+':
			std::cout << "�����: " << a + b << "\n";
			break;
		case '-':
			std::cout << "�����: " << a - b << "\n";
			break;
		case '*':
			std::cout << "�����: " << a * b << "\n";
			break;
		case '/':
			if (b != 0) {
				std::cout << "�����: " << a / b << "\n";
			}
			break;
		default:
			std::cout << "���-�� ����� �� ��� :(\n";
			system("pause");
		}
	}
	else std::cout << "�������� �������������� ��������...\n";

	return 0;
}