#include "Header.h"

int nineteenth() {
	int number, bound, a[10] = { 0 };
	std::cin >> bound;
	if (bound <= 100000) {
		for (int i = 0; i < bound; i++)
		{
			std::cin >> number;
			a[number]++;
		}
	}
	else std::cout << "Граница превышает допустимое значение.";
	for (int i = 0; i < 10; i++) if (a[i])std::cout << i << ": " << a[i] << std::endl;

	return 0;
}
