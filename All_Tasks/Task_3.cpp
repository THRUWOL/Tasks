#include "Header.h"

int third() {
	setlocale(LC_ALL, "Russian");

	std::cout << "�3.���������� ��� ������ �����\n\n";

	int math_1, math_2;
	double math_3, math_4;

	//int +-/* int
	std::cout << "������� ��� ����� �����...\n";
	std::cin >> math_1 >> math_2;
	std::cout << "\n" << math_1 + math_2 << "\n" << math_1 - math_2 << "\n" << math_1 * math_2 << "\n" << math_1 / math_2 << "\n";
	// double +-/* double
	std::cout << "������� ��� �������...\n";
	std::cin >> math_3 >> math_4;
	std::cout << "\n" << math_3 + math_4 << "\n" << math_3 - math_4 << "\n" << math_3 * math_4 << "\n" << math_3 / math_4 << "\n";
	//int +-/* double
	std::cout << "������� ����� � �������� �����...\n";
	std::cin >> math_1 >> math_3;
	std::cout << "\n" << math_1 + math_3 << "\n" << math_1 - math_3 << "\n" << math_1 * math_3 << "\n" << math_1 / math_3 << "\n";
	//double +-/* int
	std::cout << "������� ������� � ����� �����...\n";
	std::cin >> math_4 >> math_2;
	std::cout << "\n" << math_4 + math_2 << "\n" << math_4 - math_2 << "\n" << math_4 * math_2 << "\n" << math_4 / math_2 << "\n";

	return 0;
}