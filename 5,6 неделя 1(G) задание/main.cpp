#include <fstream>
#include <iostream>
#include <cmath>

float x, y;

//���� ������� y=f(x). ����� �������� ������� �� x: y = (2+x)^2 + 7, ���� x > -8
//                                                  y = 5, ���� x = -8
//                                                  y = | 2 * x - 1 | -1, ���� x < -8


int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "�������� x?"; std::cin >> x;
	if (x > -8){
		y = (2 + x) * (2 + x) + 7;
	}
	else {
		if (x == -8) {
			y = 5;
		}
		else {
			y = abs(2 * x - 1) - 1;
		}
	}

	std::cout << "�������� y = " << y;

	return 0;
}