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

	std::fstream f("text.txt", std::ios::out); // ��������� ��� ������
	f << "��������� ������ " << num1 << " \n��������� ����� " << num2 << " \n����� " << num3;
	f.close(); // ��������� ����


	f.open("text.txt", std::ios::in); // ��������� ��� ������
	f << "��������� ������ - " << num1 << " \n��������� ����� - " << num2 << " \n����� - " << num3;
	f.close(); // ��������� ����

}
