#include "Header.h"

void factorization(int num) {
	int div = 2;
	std::cout << num << " = ";
	if (num == 1) std::cout << num;
	while (num > 1)
	{
		int k = 0;
		while (num % div == 0)
		{
			k++;
			num = num / div;
		}
		if (k > 0)
		{
			std::cout << div;
			if (k > 1) std::cout << "^" << k;
			/*if (num > 1)*/ std::cout << "*";
		}
		if (div == 2) div++;
		else div += 2;
	}
	std::cout << std::endl;
}
int sixteenth() {
	int num;

	std::cin >> num;

	factorization(num);

	return 0;
}