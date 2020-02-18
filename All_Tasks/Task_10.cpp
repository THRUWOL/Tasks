#include "Header.h"

int tenth() {
	setlocale(LC_ALL, "Russian");

	double number, oldnumber, power;

	std::cout << "Введите число: "; std::cin >> number;
	oldnumber = number;
	std::cout << "\nВведите степень: "; std::cin >> power;

	//если степень положительная
	if (power > 0) {
		for (int i = 1; i < power; i++) {
			number = number * oldnumber;
		}
		std::cout << "\nОтвет: " << number << std::endl;
	}

	//если степень отрицательная
	else if (power < 0) {
		if (number == 0) std::cout << "На ноль делить нельзя" << std::endl;
		else {
			power = power * (-1);
			for (int i = 1; i < power; i++) {
				number = number * oldnumber;
			}
			number = 1 / number;
			std::cout << "\nОтвет: " << number << std::endl;
		}
	}

	//если степень равна нулю
	else if (power == 0) {
		number = 1;
		std::cout << "\nОтвет: " << number << std::endl;
	}

	return 0;
}