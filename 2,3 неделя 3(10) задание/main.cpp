#include <iostream>
#include <fstream>

using namespace std;

void ReadWriteNumbers(float num1, float num2, float num3, float num4);

int main()
{
	setlocale(LC_ALL, "Russian");

	float firstnum, secondnum, thirdnum, max;

	cout << "������� 3 ����� " << endl;
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

	cout << "������������ ����� : " << max << endl;

	ReadWriteNumbers(firstnum, secondnum, thirdnum, max);

	return 0;

}

void ReadWriteNumbers(float num1, float num2, float num3, float num4) {

	setlocale(LC_ALL, "Russian");



	std::fstream f("text.txt", std::ios::out); // ��������� ��� ������
	f << "��������� �����: " << num1 << " " << num2 << " " << num3 << endl;
	f << "������������ �� ���� �����: " << num4;
	f.close(); // ��������� ����


	f.open("text.txt", std::ios::in); // ��������� ��� ������
	f << "��������� �����: " << num1 << " " << num2 << " " << num3 << endl;
	f << "������������ �� ���� �����: " << num4;
	f.close(); // ��������� ����

}