#include <fstream>
#include <iostream>

//������������ ������ ��� �����. ��������� ������ ����� � ��� ����, ������ ����� ��������� �� 3, ������ ����� ��������� � ������� � ����� ������� ����� ����� ���� �����. 


using namespace std;

float ch1, ch2, ch3, rez;

void ReadWriteNumbers();

int main()
{
	cout << "Vvedite 1 chislo "; cin >> ch1;
	cout << "Vvedite 2 chislo "; cin >> ch2;
	cout << "Vvedite 3 chislo "; cin >> ch3;
	ch1 = ch1 * 2;
	ch2 = ch2 - 3;
	ch3 = (ch3 * ch3);
	rez = (ch1 + ch2 + ch3);
	cout << "Rezultat: " << rez;

	ReadWriteNumbers();

	return 0;
}

void ReadWriteNumbers() {

	setlocale(LC_ALL, "Russian");

	float num1 = ch1;
	float num2 = ch2;
	float num3 = ch3;
	float num4 = rez;

	std::fstream f("text.txt", std::ios::out); // ��������� ��� ������
	f << "1 ����� " << num1 << " \n2 ����� " << num2 << "\n3 �����" << num3  << " \n����� " << num4;
	f.close(); // ��������� ����


	f.open("text.txt", std::ios::in); // ��������� ��� ������
	f << "1 ����� " << num1 << " \n2 ����� " << num2 << "\n3 �����" << num3  << " \n����� " << num4;
	f.close(); // ��������� ����

}