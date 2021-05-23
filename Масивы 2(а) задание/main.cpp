#include <iostream>

int main() {
	int masiv[151];
	int rez5, rez7, rez3;

	rez5 = 0;
	rez7 = 0;
	rez3 = 0;

	for (int i = 0; i < 11; i++) {
		masiv[i] = rand() % 40 - 19;
	}

	for (int i = 0; i < 11 - 1; i++) {
		if (masiv[i] > 5) {
			rez5 += masiv[i];
		}
		if (masiv[i] < 7) {
			rez7 += masiv[i];
		}
		if (masiv[i] > 3) {
			rez3 += masiv[i];
		}
		std::cout << masiv[i] << "\n";
	}

	std::cout << "\n";

	std::cout << ">5: " << rez5;
	std::cout << "\n<7: " << rez7;
	std::cout << "\n>3: " << rez3 << "\n";

	return 0;
}