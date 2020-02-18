#include "Header.h"

int twelve() {
	setlocale(LC_ALL, "Russian");

	int number; //вводимое число
	bool prime = true;
	std::cout << "Введите целое положительное число: ";
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
			std::cout << "Простое" << std::endl;
		else
			std::cout << "Составное " << std::endl;
	}
	else std::cout << "И не составное, и не простое\n";

	return 0;
}