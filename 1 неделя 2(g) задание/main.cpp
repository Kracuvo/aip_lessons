#include <iostream>
#include <fstream>
#include <string>

float otv, r, l, pi;

void ReadWriteNumbers();

int main()
{
	setlocale(LC_ALL, "Russian");

	pi = 3.14;
	std::cout << "Vvedite radius "; std::cin >> r;
	std::cout << "Vvedite dliny sekushei "; std::cin >> l;
	otv = (pi * r) * (r + l);

	std::cout << "Plosha: " << otv;

	ReadWriteNumbers();

	return 0;
}


void ReadWriteNumbers() {

	setlocale(LC_ALL, "Russian");

	float num1 = r;
	float num2 = l;
	float num3 = otv;

	std::fstream f("text.txt", std::ios::out); // открываем для записи
	f << "Введенный радиус " << num1 << " \nВведенная длина " << num2 << " \nОтвет " << num3;
	f.close(); // закрываем файл


	f.open("text.txt", std::ios::in); // открываем для чтения
	f << "Введенный радиус - " << num1 << " \nВведенная длина - " << num2 << " \nОтвет - " << num3;
	f.close(); // закрываем файл

}
