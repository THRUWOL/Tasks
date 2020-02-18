#include "Header.h"

int eleventh() {
	setlocale(LC_ALL, "Russian");

	long long n, result = 1; // n - вводимое число, result - n!

	std::cout << "Введите число: "; std::cin >> n;

	// проверка на натуральность n
	if (n >= 0) {
		//цикл поиска n!
		for (int i = 1; i <= n; i++) {
			result = result * i;
		}
		std::cout << n << "! = " << result << std::endl;
	}
	else std::cout << "Программа не может расчитать факториал отрицательного числа...\n";

	return 0;
}