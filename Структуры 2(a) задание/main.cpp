#include <iostream>

//Напишите функцию, которая будет считать модуль комплексного числа.

struct komp {
	float a, b;
};

int main() {
	komp k, s;
	float otv1, otv2;

	std::cout << "1 = "; std::cin >> k.a >> k.b;
	std::cout << "2 = "; std::cin >> s.a >> s.b;

	otv1 = sqrt((k.a*k.a) + (k.b * k.b));
	otv2 = sqrt((s.a * s.a) + (s.b * s.b));

	std::cout << "otvet 1: " << otv1 << "\n";
	std::cout << "otvet 2: " << otv2;

	return 0;
}