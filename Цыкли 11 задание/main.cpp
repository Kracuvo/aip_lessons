#include <iostream>

//Начальный вклад в банк составил А денег. Через сколько месяцев сумма вклада 
//составит В денег, если каждый месяц сумма вклада увеличивается на Х процентов?

int main()
{
	setlocale(LC_ALL, "Russian");

	float a, b, x, f;

	std::cout << "Начальный вклад - "; std::cin >> a;
	std::cout << "Процент (в форме 0.x) - "; std::cin >> x;
	std::cout << "Конечная сумма - "; std::cin >> b;

	f = 0;

	while (b > a) {
		b = b / (x + 1);
		f += 1;
	}

	std::cout << "Кол-во месяцев - " << f;

	return 0;
}