#include <iostream>

//������� �� ����� � ����� �� �����, ������ ���������� ����� � ������ ������
//����� ������ ������. ���������� ����� n ������ ������������ 

int main()
{
	float n;

	std::cout << "Vvedite kol-vo strok"; std::cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++)
			std::cout << 0;
		std::cout << std::endl;
	}
	
		
	return 0;
}