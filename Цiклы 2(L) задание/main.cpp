#include <iostream>
#include <cmath>

//Протабулировать функцию (шаг и диапазон задаёт пользователь)

int main() {

	float x, a, b, y, shag;

	std::cout << "Vvedite shag"; std::cin >> shag;
	std::cout << "Vvedite diapozon"; std::cin >> a >> b;
	x = a;
	while (x <= b) {
		y = sqrt((5 * x) + (4 * (x * x * x))) + (4 * x) + (3 / (sin((9 * x) + 71)));
		x = x + shag;
		std::cout << y << "\n";
	}

	return 0;
}