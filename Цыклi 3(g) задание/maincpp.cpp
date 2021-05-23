#include <iostream>

struct klad {
	float x, y;
};

int main()
{
	klad k;

	float z, num1, num2;

	num1 = 0;
	num2 = 0;

	std::cout << "Vvedite Z - "; std::cin >> z;
	std::cout << "Vvedite X - "; std::cin >> k.x;

	for (int i = 1; i <= z; i++)
	{
		if ((i % 2) == 0)
		{
			num1 += 1 / (i * k.x);
		}
	}
	for (int j = 1; j <= z; j++)
	{
		if ((j % 2) != 0)
		{
			num2 -= 1 / (j * k.x);
		}
	}

	k.y = num1 + num2;

	std::cout << "Y =" << k.y;

	return 0;
}