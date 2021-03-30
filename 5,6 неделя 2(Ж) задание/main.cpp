#include <fstream>
#include <iostream>
#include <cmath>

//Напишите программу, которая принимает от пользователя координаты точки и определяет, попала ли точка в заштрихованную область. Ж


float x, y;

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Координаты точки? (сначала x потом y)"; std::cin >> x >> y;
	if ((y > 1 - x) && (y < 2 * (x * x)) && (x < 1)) {
		std::cout << "Попадает в область";
	}
	else {
		if ((y > 1 - x) && (x < 1)) {
			std::cout << "Попадает в область";
		}
		else {
			std::cout << "Не попадает в область";
		}
	}
	return 0;
}