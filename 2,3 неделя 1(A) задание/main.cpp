#include <iostream>

using namespace std;

float b, a;

int main()
{
	cout << "Vvedite peremennie a,b "; cin >> a >> b; cout << endl;
	cout << "(" << a << "+4*" << b << ")(" << a << "-3*" << b << ")+" << a << "*" << a << "=" << ((a + (4 * b))*(a-(3*b)))+(a*a) << endl;
	return 0;
}