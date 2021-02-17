#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float firstnum, secondnum, thirdnum, max;

	cout << "Введите 3 числа " << endl;
	cin >> firstnum;
	cin >> secondnum;
	cin >> thirdnum;

	if (firstnum > secondnum)
	{
		max = firstnum;
	}
	else
	{
		max = secondnum;
	}
	if (max < thirdnum)
	{
		max = thirdnum;
	}

	cout << "Максимальное число : " << max << endl;

	return 0;

}