#include <iostream>


//� ���������� ������� ����� ����� ������������� ���������,
//������� �� � ���� ������� ��������� � ������������� � ������ ��������.


int main(){
	int x = 0;
	int mat[4][4];

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			mat[i][j] = rand() % 11;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			std::cout << "  " << mat[i][j];
		std::cout << "\n";
	}

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if ((i <= j) && (j % 2 != 0))
				x += mat[i][j];

	std::cout << "\n\n" << x;


	return 0;
}
