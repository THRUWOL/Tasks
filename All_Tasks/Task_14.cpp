#include "Header.h"

int fourtheenth() {
	setlocale(LC_ALL, "Russian");

	int l1, r1, l2, r2, s;
	int stop = 0;

	std::cin >> s >> l1 >> r1 >> l2 >> r2;

	if (l1 <= r1 && l2 <= r2) {
		for (; l1 <= r1; l1++) {
			for (int n = l2; n <= r2; n++) {
				if (l1 + n == s) {
					std::cout << l1 << ' ' << n << std::endl;
					stop = 1;
					break;
				}
				else if (l1 == r1 && n == r2 && l1 + n != s) std::cout << -1 << std::endl;
			}
			if (stop == 1) break;
		}

	}
	else std::cout << "Ќачало отрезка не может быть больше его конца\n";

	return 0;
}