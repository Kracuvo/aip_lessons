#include <fstream>
#include <iostream>
#include <cmath>

float x, y;

//Дана функция y=f(x). Найти значение функции по x: y = (2+x)^2 + 7, если x > -8
//                                                  y = 5, если x = -8
//                                                  y = | 2 * x - 1 | -1, если x < -8


int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Значение x?"; std::cin >> x;
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

	std::cout << "Значение y = " << y;

	return 0;
}