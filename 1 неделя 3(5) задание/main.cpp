
#include <iostream>

using namespace std;

float ch1, ch2, ch3, rez;

int main()
{
	cout << "Vvedite 1 chislo "; cin >> ch1;
	cout << "Vvedite 2 chislo "; cin >> ch2;
	cout << "Vvedite 3 chislo "; cin >> ch3;
	ch1 = ch1 * 2;
	ch2 = ch2 - 3;
	ch3 = (ch3 * ch3);
	rez = (ch1 + ch2 + ch3);
	cout << "Rezultat: " << rez;
	return 0;
}