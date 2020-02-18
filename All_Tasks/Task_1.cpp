#include "Header.h"

int first() {
	setlocale(LC_ALL, "Russian");
	std::cout << "№1.Простой вывод\n\n";
	std::cout << "Результат вычисления выражения 2 + 2 * 2 = " << 2 + 2 * 2 << "\n\n";

	return 0;
}
