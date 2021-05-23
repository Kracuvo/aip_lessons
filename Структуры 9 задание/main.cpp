#include <iostream>

struct znach
{
	float dmin, dmax, greh, maxspeed;
};

int main() {
	znach dot1, dot2;
	float rez;

	std::cout << "Info o datchike 1: \n";
	std::cout << "Diapozon: "; std::cin >> dot1.dmin >> dot1.dmax;
	std::cout << "Pogreshnost: "; std::cin >> dot1.greh;
	std::cout << "Max speed(skorost): "; std::cin >> dot1.maxspeed;
	
	std::cout << "\nInfo o datchike 2: \n";
	std::cout << "Diapozon: "; std::cin >> dot2.dmin >> dot2.dmax;
	std::cout << "Pogreshnost: "; std::cin >> dot2.greh;
	std::cout << "Max speed(skorost): "; std::cin >> dot2.maxspeed;

	rez = (dot1.greh + dot2.greh) / 2;

	std::cout << "\nSrednyya pogreshnost: " << rez << "\n";
}