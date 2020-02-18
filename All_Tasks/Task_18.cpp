#include "Header.h"

int eighteenth() {
	srand(time(NULL));
	int max = -100, min = 100, a[20];
	for (int i = 0; i < 20; i++) a[i] = rand() % 201 - 100;
	for (int i = 0; i < 20; i++)
	{
		std::cout << a[i] << ' ';
		max = (a[i] > max) ? a[i] : max;
		if (a[i] < min)min = a[i];
	}
	std::cout << std::endl << min << std::endl << max << std::endl;

	return 0;
}
