#include "Header.h"

int seventh() {
	setlocale(LC_ALL, "Russian");

	int choise; char input_7 = 1; // ���������� ������ ������� ������� � �����
	double a, b, c, p, S; //a, b � c - ������� ������������, p - ������������, S - �������
	double x_1, y_1, x_2, y_2, x_3, y_3; //���������� ������ A, B � C

	do {
		std::cout << "������ ��������� ������������ ������� ������������ ����� ��������������� ���������.\n";
		std::cout << " 1. ����� ����� ������ a, b, c;\n 2. ����� ���������� ������ A, B, C.\n";
		std::cout << "�������� ����� ������� � ������� ���: "; std::cin >> choise;

		//������ ������
		if (choise == 1) {
			std::cout << "������� �������� ��� ���������� 'a': "; std::cin >> a;
			std::cout << "������� �������� ��� ���������� 'b': "; std::cin >> b;
			std::cout << "������� �������� ��� ���������� 'c': "; std::cin >> c;

			//�������� �� ��������������� ������
			if (a > 0 and b > 0 and c > 0 and a < (b + c) and b < (a + c) and c < (b + a)) {
				p = (a + b + c) / 2; // ������� �������������
				S = sqrt(p * (p - a) * (p - b) * (p - c)); // ������� ������

				std::cout << "S = " << S << "\n";
			}
			else std::cout << "�� ���� ������ ������, ����������� �� ����������.\n";
		}

		//������ ������
		else if (choise == 2) {

			std::cout << "������� ���������� ������" << std::endl;
			std::cin >> x_1 >> y_1;
			std::cin >> x_2 >> y_2;
			std::cin >> x_3 >> y_3;
			if ((x_1 == x_2 && y_1 == y_2) || (x_2 == x_3 && y_2 == y_3) || (x_1 == x_3 && y_1 == y_3) || (x_1 == x_2 && x_1 == x_3) || (y_1 == y_2 && y_2 == y_3)) {
				std::cout << "����������� �� ����������";
			}
			else {
				a = sqrt(pow(y_1 - x_1, 2) + pow(x_2 - y_2, 2));
				b = sqrt(pow(y_2 - x_2, 2) + pow(y_3 - x_3, 2));
				c = sqrt(pow(y_3 - x_3, 2) + pow(y_1 - x_1, 2));
				if (a + b <= c || b + c <= a || a + c <= b) {
					std::cout << "������������ �� ����������" << std::endl;
				}
				else {
					p = (a + b + c) / 2.0;
					S = sqrt(p * (p - a) * (p - b) * (p - c));
					std::cout << "S = " << S << std::endl;
				}
			}
		}
		else {
			std::cout << "�������������� �����, ����� ���������� ���� ��� ���, ������� '0'\n";
			std::cin >> input_7;
		}
	} while (input_7 == '0');

	return 0;
}