#include <iostream>

int main() {
	int masiv[151];
	int rez;

	rez = 0;

	for (int i = 0; i < 11; i++) {
		masiv[i] = rand() % 40 - 19;
	}

	for (int i = 0; i < 11 - 1; i++) {
		if (masiv[i] > 0) {
			rez += 1;
		}

		std::cout << masiv[i] << "\n";
	}

	std::cout << "\n";

	std::cout << "Ответ " << rez;

	return 0;
}