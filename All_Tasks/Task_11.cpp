#include "Header.h"

int eleventh() {
	setlocale(LC_ALL, "Russian");

	long long n, result = 1; // n - �������� �����, result - n!

	std::cout << "������� �����: "; std::cin >> n;

	// �������� �� ������������� n
	if (n >= 0) {
		//���� ������ n!
		for (int i = 1; i <= n; i++) {
			result = result * i;
		}
		std::cout << n << "! = " << result << std::endl;
	}
	else std::cout << "��������� �� ����� ��������� ��������� �������������� �����...\n";

	return 0;
}