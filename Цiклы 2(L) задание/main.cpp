#include <iostream>
#include <cmath>

//Протабулировать функцию (шаг и диапазон задаёт пользователь)

struct klad
{
	float x, y;
};

int main() {

	klad k;
	float a, b, shag;

	std::cout << "Vvedite shag"; std::cin >> shag;
	std::cout << "Vvedite diapozon"; std::cin >> a >> b;
	k.x = a;
	while (k.x <= b) {
		k.y = sqrt((5 * k.x) + (4 * (k.x * k.x * k.x))) + (4 * k.x) + (3 / (sin((9 * k.x) + 71)));
		k.x = k.x + shag;
		std::cout << k.y << "\n";
	}

	return 0;
}