#include <iostream>
#include <fstream>

using namespace std;

float b, a;

void ReadWriteNumbers();

int main()
{
	cout << "Vvedite peremennie a,b "; cin >> a >> b; cout << endl;
	cout << "(" << a << "+4*" << b << ")(" << a << "-3*" << b << ")+" << a << "*" << a << "=" << ((a + (4 * b))*(a-(3*b)))+(a*a) << endl;

	ReadWriteNumbers();

	return 0;
}



void ReadWriteNumbers() {

	setlocale(LC_ALL, "Russian");

	float num1 = a;
	float num2 = b;

	std::fstream f("text.txt", std::ios::out); // открываем для записи
	f << "Введенные переменные:" << " a: " << a << " b: " << b << endl;
	f << "(" << num1 << "+4*" << num2 << ")(" << num1 << "-3*" << num2 << ")+" << num1 << "*" << num1 << "=" << ((num1 + (4 * num2)) * (num1 - (3 * num2))) + (num1 * num1) << endl;
	f.close(); // закрываем файл


	f.open("text.txt", std::ios::in); // открываем для чтения
	f << "Введенные переменные:" << " a: " << a << " b: " << b << endl;
	f << "(" << num1 << "+4*" << num2 << ")(" << num1 << "-3*" << num2 << ")+" << num1 << "*" << num1 << "=" << ((num1 + (4 * num2)) * (num1 - (3 * num2))) + (num1 * num1) << endl;
	f.close(); // закрываем файл

}