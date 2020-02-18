#include "Header.h"

double BMI(double weight, double height) {
	return weight / (height * height);
}
void printBMI(double BMI) {
	if (BMI < 18.5) std::cout << "Недостаточная масса" << std::endl;
	else if ((18.5 <= BMI) && (BMI < 25.0)) std::cout << "Нормальный вес" << std::endl;
	else if ((25.0 <= BMI) && (BMI < 30.0)) std::cout << "Избыточная масса" << std::endl;
	else std::cout << "Ожирение" << std::endl;
}
int seventeenth() {
	setlocale(LC_ALL, "Russian");
	double weight, height;
	std::cout << "Введите вес, потом рост.\n";
	std::cin >> weight >> height;
	height /= 100;

	printBMI(BMI(weight, height));

	return 0;
}
