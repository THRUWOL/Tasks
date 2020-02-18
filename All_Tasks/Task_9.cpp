#include "Header.h"

int ninth() {
	setlocale(LC_ALL, "Russian");

	int random, answer = 0, player = -1; // random - случайное число, player - ответ игрока(пользователя), answer - попытки

	//запуск генератора случайных чисел
	srand((time(NULL)));

	std::cout << "Приветствую, пользователь. Я загадал число от 0 до 100. Сможешь его отгадать? У тебя 5 попыток...\n";

	do {
		random = rand() % 101; //загадывает число от [0;100]
		answer = 0;
		do {
			std::cin >> player; // ввод ответа пользователя

			if (answer == 4) {
				if (random == player) {
					std::cout << "Поздравляю! Вы угадали\n";
					answer = 5;
				}
				else {
					std::cout << "Вы проиграли. Было загадано: " << random << "\n";
					++answer;
				}
			}
			else if (random > player) {
				std::cout << "Загаданное число больше\n";
				++answer;
			}
			else if (random < player) {
				std::cout << "Загаданное число меньше\n";
				++answer;
			}
			else if (random == player) {
				std::cout << "Поздравляю! Вы угадали\n";
				answer = 5;
			}
			else {
				std::cout << "ERROR 404";
				system("pause");
			}
		} while (answer != 5);

		std::cout << "Хотите начать сначала?(1 - ДА)\n";
		std::cin >> answer;

		if (answer == 1) std::cout << "Хорошо, я загадал число.\n"; // продолжает игру, если пользователь ввёл 1
		else std::cout << "До встречи...\n"; // в противном случае, завершит её

	} while (answer == 1);

	return 0;
}