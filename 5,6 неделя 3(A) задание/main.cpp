#include <fstream>
#include <iostream>
#include <cmath>

//�������� ���������, ������� ��������� �� ������������ ���������� ����� � ����������, ������ �� ����� � �������������� �������. A


int main()
{
	float x, y, l, r;

	r = 2;

	setlocale(LC_ALL, "Russian");

	std::cout << "���������� �����? (������� x ����� y)"; std::cin >> x >> y;
	
	l = sqrt(x * x + y * y);
	if ((l < r) && (l > 1) && (y > 0)){
		std::cout << "����� �� �������� � �������";
	}
	else {
		std::cout << "����� �� �������� � �������";
	}

	return 0;
}