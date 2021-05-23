#include <iostream>

struct bot
{
	float rt_speed, radius_sc, koef_tr;
};

int main() {
	bot bot;
	float traction;

	std::cout << "Bot info: \n";
	std::cout << "Rotation speed : "; std::cin >> bot.rt_speed;
	std::cout << "Screw radius: "; std::cin >> bot.radius_sc;
	std::cout << "Koef traction: "; std::cin >> bot.koef_tr;

	traction = bot.rt_speed * bot.radius_sc * bot.koef_tr;

	std::cout << "\nTraction: " << traction;

	return 0;
}