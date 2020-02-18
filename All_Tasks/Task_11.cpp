#include "Header.h"

int eleventh() {
	setlocale(LC_ALL, "Russian");

	long long n, result = 1; // n - ââîäèìîå ÷èñëî, result - n!

	std::cout << "Ââåäèòå ÷èñëî: "; std::cin >> n;

	// ïðîâåðêà íà íàòóðàëüíîñòü n
	if (n >= 0) {
		//öèêë ïîèñêà n!
		for (int i = 1; i <= n; i++) {
			result = result * i;
		}
		std::cout << n << "! = " << result << std::endl;
	}
	else std::cout << "Ïðîãðàììà íå ìîæåò ðàñ÷èòàòü ôàêòîðèàë îòðèöàòåëüíîãî ÷èñëà...\n";


	return 0;
}
