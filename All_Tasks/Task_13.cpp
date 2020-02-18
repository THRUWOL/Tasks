#include "Header.h"

int thirteenth() {
	int n, x = 1, c = 0;
	std::cin >> n;
	if (n == 0) std::cout << 1 << std::endl;
	else {
		while (x <= n) {
			c++;
			x *= 2;
		}
		std::cout << c << std::endl;
	}

	return 0;
}