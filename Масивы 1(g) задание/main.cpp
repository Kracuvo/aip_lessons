#include <iostream>

int main() {
	int masiv[151];

	for (int i = 0; i < 151; i++) {
		masiv[i] = rand() % 40 - 19;
	}

	for (int i = 0; i < 151 - 1; i++)
		std::cout << i << " - " << masiv[i] << ", " << std::endl;

	return 0;
}