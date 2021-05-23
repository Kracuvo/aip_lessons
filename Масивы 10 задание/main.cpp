#include <iostream>

int main() {
	int masiv[151];

	for (int i = 0; i < 11; i++) {
		masiv[i] = rand() % 40 - 19;
	}

	for (int i = 0; i < 11 - 1; i++) {
		if (masiv[i] < 0) {
			masiv[i] = 0;
		}

		std::cout << masiv[i] << "\n";
	}

	return 0;
}