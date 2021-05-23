#include <iostream>

struct klad
{
	float x, y;
};

int main()
{
	klad k;

	float z;


	std::cout << "Vvedite Z - "; std::cin >> z;
	std::cout << "Vvedite X - "; std::cin >> k.x;

	k.y = 0;

	for (int i = 1; i <= z; i++)
	{
		k.y += i * k.x;
	}

	std::cout << "Y = " << k.y;

	return 0;
}