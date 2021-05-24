#include <iostream>


int main() {
	int x = 10;
	int mat[3][3];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) 
			mat[i][j] = rand() % 11;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++)
			std::cout << "  " << mat[i][j];
			std::cout << "\n";
		}

	std::cout << "\n\n\n" << "Preobrazovannaya" << "\n\n";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			if (mat[i][j] < x)
				x = mat[i][j];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			if (mat[i][j] == x) {
				for (int k = 0; k < 3; k++)
					mat[i][k] = 0;
			}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			std::cout << "  " << mat[i][j];
		std::cout << "\n";
	}

	return 0;
}