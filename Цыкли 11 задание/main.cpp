#include <iostream>

//��������� ����� � ���� �������� � �����. ����� ������� ������� ����� ������ 
//�������� � �����, ���� ������ ����� ����� ������ ������������� �� � ���������?

int main()
{
	setlocale(LC_ALL, "Russian");

	float a, b, x, f;

	std::cout << "��������� ����� - "; std::cin >> a;
	std::cout << "������� (� ����� 0.x) - "; std::cin >> x;
	std::cout << "�������� ����� - "; std::cin >> b;

	f = 0;

	while (b > a) {
		b = b / (x + 1);
		f += 1;
	}

	std::cout << "���-�� ������� - " << f;

	return 0;
}