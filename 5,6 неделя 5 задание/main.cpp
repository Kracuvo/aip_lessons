#include <iostream>

//������������ ������ ���� ������. ������� �� ����� ���� ������. �������, ��� 1-� ����� ������ � ��� �������.
//����������� ������ - ������������ ����� ������ ����� �� 1 �� 7, ������������ 
//����� ������ ��� ������� ����� ������.

int main() {

	setlocale(LC_ALL, "Russian");

	int date, day;

	std::cout << "������� ����� ������� ��� ������: "; std::cin >> day;
	std::cout << "������� ���� ������: "; std::cin >> date;

    if (day > 7 || day < 1 || date > 31 || date < 1) {
        for (int i = 0; i < 54; i++) {
            std::cout << "error\n";
        }
        return 0;
        exit(0);
    }

    date = date % 7 + day - 1;
    if (date >= 7) date -= 7;

    switch (date) {
    case 0: std::cout << "�����������" << std::endl; break;
    case 1: std::cout << "�����������" << std::endl; break;
    case 2: std::cout << "�������" << std::endl; break;
    case 3: std::cout << "�����" << std::endl; break;
    case 4: std::cout << "�������" << std::endl; break;
    case 5: std::cout << "�������" << std::endl; break;
    case 6: std::cout << "�������" << std::endl; break;
    }

    return 0;
}


