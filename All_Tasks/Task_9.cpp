#include "Header.h"

int ninth() {
	setlocale(LC_ALL, "Russian");

	int random, answer = 0, player = -1; // random - ��������� �����, player - ����� ������(������������), answer - �������

	//������ ���������� ��������� �����
	srand((time(NULL)));

	std::cout << "�����������, ������������. � ������� ����� �� 0 �� 100. ������� ��� ��������? � ���� 5 �������...\n";

	do {
		random = rand() % 101; //���������� ����� �� [0;100]
		answer = 0;
		do {
			std::cin >> player; // ���� ������ ������������

			if (answer == 4) {
				if (random == player) {
					std::cout << "����������! �� �������\n";
					answer = 5;
				}
				else {
					std::cout << "�� ���������. ���� ��������: " << random << "\n";
					++answer;
				}
			}
			else if (random > player) {
				std::cout << "���������� ����� ������\n";
				++answer;
			}
			else if (random < player) {
				std::cout << "���������� ����� ������\n";
				++answer;
			}
			else if (random == player) {
				std::cout << "����������! �� �������\n";
				answer = 5;
			}
			else {
				std::cout << "ERROR 404";
				system("pause");
			}
		} while (answer != 5);

		std::cout << "������ ������ �������?(1 - ��)\n";
		std::cin >> answer;

		if (answer == 1) std::cout << "������, � ������� �����.\n"; // ���������� ����, ���� ������������ ��� 1
		else std::cout << "�� �������...\n"; // � ��������� ������, �������� �

	} while (answer == 1);

	return 0;
}