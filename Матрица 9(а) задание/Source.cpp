#include <iostream>


struct px {
	int r, g, b;
};


int main() {
	const int r = 3, c = 3;
	px mat[r][c];

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			std::cin >> mat[i][j].r;
			std::cin >> mat[i][j].g;
			std::cin >> mat[i][j].b;
		}
	}

	std::cout << "\n\nMATRIZA\n";


	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			std::cout << mat[i][j].r << ".";
			std::cout << mat[i][j].g << ".";
			std::cout << mat[i][j].b << " ";
		}
		std::cout << "\n";
	}


	return 0;
}