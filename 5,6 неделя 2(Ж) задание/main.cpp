#include <fstream>
#include <iostream>
#include <cmath>

//�������� ���������, ������� ��������� �� ������������ ���������� ����� � ����������, ������ �� ����� � �������������� �������. �


float x, y;

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "���������� �����? (������� x ����� y)"; std::cin >> x >> y;
	if ((y > 1 - x) && (y < 2 * (x * x)) && (x < 1)) {
		std::cout << "�������� � �������";
	}
	else {
		if ((y > 1 - x) && (x < 1)) {
			std::cout << "�������� � �������";
		}
		else {
			std::cout << "�� �������� � �������";
		}
	}
	return 0;
}