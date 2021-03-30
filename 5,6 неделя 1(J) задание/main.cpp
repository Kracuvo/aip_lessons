#include <fstream>
#include <iostream>
#include <cmath>

//���� ������� y=f(x). ����� �������� ������� �� x:
//y = 3x - 5, ���� x > 5
//y = 10, ���� x = 5
//y = 2 * | x - 2 | +5, ���� x < 5

float x, y;

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "�������� x?"; std::cin >> x;
	if (x > 5) {
		y = 3 * x - 5;
	}
	else {
		if (x == 5) {
			y = 10;
		}
		else {
			y = 2 * abs(x - 2) + 5;
		}
	}

	std::cout << "�������� y = " << y;

	return 0;
}