#include "Header.h"

void bubble_sort(double* arr, int n) {
	double t;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				t = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = t;
			}
		}
	}
}
void result(double* arr, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
int twenty() {
	int n;
	std::cin >> n;

	if (n <= 100000) {
		double* arr = new double[n];

		for (int i = 0; i < n; i++) {
			std::cin >> arr[i];
		}

		bubble_sort(arr, n);
		result(arr, n);

		delete[] arr;
	}

	return 0;
}