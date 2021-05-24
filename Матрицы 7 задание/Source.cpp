#include <iostream>

int main() {
	int x = 0, y = 0;
	int mat[2][31];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 31; j++)
			mat[i][j] = rand() % 10;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 31; j++)
			std::cout << "  " << mat[i][j];
		std::cout << "\n";
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 31; j++)
			if (mat[i][j] > x)
			x = mat[i][j];
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 31; j++)
			if (mat[i][j] > y)
				y = mat[i][j];
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 31; j++)
			if ((mat[1][j] == x) && (mat[2][j] == y))
				std::cout << "\n\n\nUrogan bil";
	}
	
	return 0;
}