#include <iostream>
#include <cmath>

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
		k.y =-(2 + (9 * k.x)) + (6 * k.x);
		k.x = k.x + shag;
		std::cout << k.y << "\n";
	}

	return 0;
}