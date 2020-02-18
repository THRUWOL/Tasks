#include "Header.h"

int seventh() {
	setlocale(LC_ALL, "Russian");

	int choise; char input_7 = 1; // переменная выбора способа решения и выход
	double a, b, c, p, S; //a, b и c - стороны треугольника, p - полупериметр, S - площадь
	double x_1, y_1, x_2, y_2, x_3, y_3; //координаты вершин A, B и C

	do {
		std::cout << "Данная программа рассчитывает площадь треугольника двумя представленными способами.\n";
		std::cout << " 1. Через длины сторон a, b, c;\n 2. Через координаты вершин A, B, C.\n";
		std::cout << "Выберите номер способа и введите его: "; std::cin >> choise;

		//первый способ
		if (choise == 1) {
			std::cout << "Введите значение для переменной 'a': "; std::cin >> a;
			std::cout << "Введите значение для переменной 'b': "; std::cin >> b;
			std::cout << "Введите значение для переменной 'c': "; std::cin >> c;

			//проверка на положительность сторон
			if (a > 0 and b > 0 and c > 0 and a < (b + c) and b < (a + c) and c < (b + a)) {
				p = (a + b + c) / 2; // формула полупериметра
				S = sqrt(p * (p - a) * (p - b) * (p - c)); // формула Герона

				std::cout << "S = " << S << "\n";
			}
			else std::cout << "Вы вели ложные данные, треугольник не существует.\n";
		}

		//второй способ
		else if (choise == 2) {

			std::cout << "Введите координаты вершин" << std::endl;
			std::cin >> x_1 >> y_1;
			std::cin >> x_2 >> y_2;
			std::cin >> x_3 >> y_3;
			if ((x_1 == x_2 && y_1 == y_2) || (x_2 == x_3 && y_2 == y_3) || (x_1 == x_3 && y_1 == y_3) || (x_1 == x_2 && x_1 == x_3) || (y_1 == y_2 && y_2 == y_3)) {
				std::cout << "Треугольник не существует";
			}
			else {
				a = sqrt(pow(y_1 - x_1, 2) + pow(x_2 - y_2, 2));
				b = sqrt(pow(y_2 - x_2, 2) + pow(y_3 - x_3, 2));
				c = sqrt(pow(y_3 - x_3, 2) + pow(y_1 - x_1, 2));
				if (a + b <= c || b + c <= a || a + c <= b) {
					std::cout << "Треугольнкик не существует" << std::endl;
				}
				else {
					p = (a + b + c) / 2.0;
					S = sqrt(p * (p - a) * (p - b) * (p - c));
					std::cout << "S = " << S << std::endl;
				}
			}
		}
		else {
			std::cout << "Несуществующий номер, чтобы произвести ввод ещё раз, введите '0'\n";
			std::cin >> input_7;
		}
	} while (input_7 == '0');

	return 0;
}