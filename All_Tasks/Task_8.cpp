#include "Header.h"

int eight() {
	setlocale(LC_ALL, "Russian");

	double a, b;
	char input_8 = '1';

	std::cout << "Запущен калькулятор.\n\n";

	std::cout << "Введите пример: ";
	std::cin >> a >> input_8 >> b;

	if (input_8 == '+' || input_8 == '-' || input_8 == '*' || input_8 == '/') {

		switch (input_8) {
		case '+':
			std::cout << "Ответ: " << a + b << "\n";
			break;
		case '-':
			std::cout << "Ответ: " << a - b << "\n";
			break;
		case '*':
			std::cout << "Ответ: " << a * b << "\n";
			break;
		case '/':
			if (b != 0) {
				std::cout << "Ответ: " << a / b << "\n";
			}
			break;
		default:
			std::cout << "Что-то пошло не так :(\n";
			system("pause");
		}
	}
	else std::cout << "Неверное арифметическое действие...\n";

	return 0;
}