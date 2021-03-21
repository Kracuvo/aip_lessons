#include <iostream>
#include <fstream>

using namespace std;

void ReadWriteNumbers(float num1, float num2, float num3, float num4);

int main()
{
	setlocale(LC_ALL, "Russian");

	float firstnum, secondnum, thirdnum, max;

	cout << "Введите 3 числа " << endl;
	cin >> firstnum;
	cin >> secondnum;
	cin >> thirdnum;

	if (firstnum > secondnum)
	{
		max = firstnum;
	}
	else
	{
		max = secondnum;
	}
	if (max < thirdnum)
	{
		max = thirdnum;
	}

	cout << "Максимальное число : " << max << endl;

	ReadWriteNumbers(firstnum, secondnum, thirdnum, max);

	return 0;

}

void ReadWriteNumbers(float num1, float num2, float num3, float num4) {

	setlocale(LC_ALL, "Russian");



	std::fstream f("text.txt", std::ios::out); // открываем для записи
	f << "Введенные числа: " << num1 << " " << num2 << " " << num3 << endl;
	f << "Максимальное из этих чисел: " << num4;
	f.close(); // закрываем файл


	f.open("text.txt", std::ios::in); // открываем для чтения
	f << "Введенные числа: " << num1 << " " << num2 << " " << num3 << endl;
	f << "Максимальное из этих чисел: " << num4;
	f.close(); // закрываем файл

}