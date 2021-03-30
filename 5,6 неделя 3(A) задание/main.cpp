#include <fstream>
#include <iostream>
#include <cmath>

//Ќапишите программу, котора€ принимает от пользовател€ координаты точки и определ€ет, попала ли точка в заштрихованную область. A


int main()
{
	float x, y, l, r;

	r = 2;

	setlocale(LC_ALL, "Russian");

	std::cout << " оординаты точки? (сначала x потом y)"; std::cin >> x >> y;
	
	l = sqrt(x * x + y * y);
	if ((l < r) && (l > 1) && (y > 0)){
		std::cout << "“очка не попадает в область";
	}
	else {
		std::cout << "“очка не попадает в область";
	}

	return 0;
}