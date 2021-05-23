#include <iostream>

struct znach
{
	float dmin, dmax, greh, maxspeed;
};

int main() {
	znach dot1, dot2;

	std::cout << "Info o datchike 1: \n";
	std::cout << "Diapozon: "; std::cin >> dot1.dmin >> dot1.dmax;
	std::cout << "Pogreshnost: "; std::cin >> dot1.greh;
	std::cout << "Max speed(skorost): "; std::cin >> dot1.maxspeed;

	std::cout << "\nInfo o datchike 2: \n";
	std::cout << "Diapozon: "; std::cin >> dot2.dmin >> dot2.dmax;
	std::cout << "Pogreshnost: "; std::cin >> dot2.greh;
	std::cout << "Max speed(skorost): "; std::cin >> dot2.maxspeed;
	std::cout << "\nLowest speed: \n";

	if (dot1.maxspeed > dot2.maxspeed) {
		std::cout << "\nInfo o datchike 2: \n";
		std::cout << "Diapozon: " << dot2.dmin << " " << dot2.dmax << "\n";
		std::cout << "Pogreshnost: " << dot2.greh << "\n";
		std::cout << "Max speed(skorost): " << dot2.maxspeed << "\n";
	}
	else {
		std::cout << "\nInfo o datchike 1: \n";
		std::cout << "Diapozon: " << dot1.dmin << " " << dot1.dmax << "\n";
		std::cout << "Pogreshnost: " << dot1.greh << "\n";
		std::cout << "Max speed(skorost): " << dot1.maxspeed << "\n";
	}
}