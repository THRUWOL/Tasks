#include "Header.h"

int third() {
	setlocale(LC_ALL, "Russian");

	std::cout << "№3.Арифметика для разных типов\n\n";

	int math_1, math_2;
	double math_3, math_4;

	//int +-/* int
	std::cout << "Введите два целых числа...\n";
	std::cin >> math_1 >> math_2;
	std::cout << "\n" << math_1 + math_2 << "\n" << math_1 - math_2 << "\n" << math_1 * math_2 << "\n" << math_1 / math_2 << "\n";
	// double +-/* double
	std::cout << "Введите два дробных...\n";
	std::cin >> math_3 >> math_4;
	std::cout << "\n" << math_3 + math_4 << "\n" << math_3 - math_4 << "\n" << math_3 * math_4 << "\n" << math_3 / math_4 << "\n";
	//int +-/* double
	std::cout << "Введите целое и дробноое числа...\n";
	std::cin >> math_1 >> math_3;
	std::cout << "\n" << math_1 + math_3 << "\n" << math_1 - math_3 << "\n" << math_1 * math_3 << "\n" << math_1 / math_3 << "\n";
	//double +-/* int
	std::cout << "Введите дробное и целое числа...\n";
	std::cin >> math_4 >> math_2;
	std::cout << "\n" << math_4 + math_2 << "\n" << math_4 - math_2 << "\n" << math_4 * math_2 << "\n" << math_4 / math_2 << "\n";

	return 0;
}
}
