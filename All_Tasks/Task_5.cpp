#include "Header.h"

int fifth() {
	setlocale(LC_ALL, "Russian");

	std::cout << "\n\n�5.��������� �������\n\n";
	double g = -9.8, xt;
	double x_o, v_o, t;

	std::cout << "��������� �� ������� ���������������� �������� ����������� ����� ���������� ��������� ������.\n������� ��������� ������: \n";
	std::cout << "��������� ����������(�): "; std::cin >> x_o;
	std::cout << "��������(�/�): "; std::cin >> v_o;
	std::cout << "�����(�): "; std::cin >> t;
	std::cout << "������ �� ������������: " << x_o << " �, " << v_o << " �/�, " << t << " �.";

	std::cout << "����������� ����� ���������� ��������� ������ ...\n";

	xt = x_o + v_o * t + g * t * t / 2; //������� ���������������� ��������, ��� a = g

	/*�� �� ���� ������� xt = x_0 + v_0 * t + 1/2 * g * t * t.
	 ��-�� ����, ��� C++ 1/2 ����� ��� 0,5 � ������������� �� ����������� ������� �����, ������� g*t*t ������ ����,
	 ����� ���������� �� 2, ��������� �� 0 */

	std::cout << "�����: " << xt << " �.";

	return 0;
}
