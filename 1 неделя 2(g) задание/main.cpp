#include <iostream>

using namespace std;

float r, l, pi;

int main()
{
	pi = 3.14;
	cout << "Vvedite radius "; cin >> r;
	cout << "Vvedite dliny sekushei "; cin >> l;
	cout << "Ploshad konusa " << (pi * r) * (r + l);
	return 0;
}