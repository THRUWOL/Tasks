#include "Header.h"

int second() {
	setlocale(LC_ALL, "Russian");

	std::cout << "№2.Переменные int и double\n\n";

	int first_int = 3, second_int = 3.14;
	double first_double = 3, second_double = 3.14;

	std::cout << "Целочисленные переменные:\n" << "1. " << first_int << "\n" << "2. " << second_int << "\n";
	std::cout << "Дробные переменные:\n" << "1. " << first_double << "\n" << "2. " << second_double << "\n\n";
	/* В случае с присванием  дробного числа 3.14 целочисленной переменной second_inta
	на экран выводится не 3.14, а 3, в связи с тем, что наша переменная secont_int отбрасывает дробную часть числа 3.14.
	Так как int не для отображения дробных чисел, в отличии от double.*/

	return 0;
}
