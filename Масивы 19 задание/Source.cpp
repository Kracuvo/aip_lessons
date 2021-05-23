#include <iostream>	

struct films {
	int name;
	int cost;
	int director;
};	

int main() {
	int k, c, t;
	films video_kart[10];

	//---------------------------------------------
	//заполнение масива
		for (int i = 0; i < 10; i++) {
			video_kart[i].name = i;
			video_kart[i].cost = rand() % 50 + 300;
			video_kart[i].director = rand() % 4;
		}
	//------------------------------------------------

	//------------------------------------------------
	//Вывод масива по возростанию
		std::cout << "VIDEO KART (a)" << "\n\n";

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (video_kart[j - 1].cost > video_kart[j].cost) {
					k = video_kart[j - 1].cost;
					video_kart[j - 1].cost = video_kart[j].cost;
					video_kart[j].cost = k;

					c = video_kart[j - 1].name;
					video_kart[j - 1].name = video_kart[j].name;
					video_kart[j].name = c;

					t = video_kart[j - 1].director;
					video_kart[j - 1].director = video_kart[j].director;
					video_kart[j].director = t;
				}
			}
		}


		for (int i = 0; i < 10; i++) {
				std::cout << "Name - " << video_kart[i].name << "  ";
				std::cout << "Cost - " << video_kart[i].cost << "  ";
				std::cout << "Director - " << video_kart[i].director << "  ";

				std::cout << "\n";
		}
	//-------------------------------------------------

		std::cout << "\n\n";

	//------------------------------------------------
	//Вывод масива без минимальной и максимальной стоимости
		std::cout << "VIDEO KART (b)" << "\n\n";

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (video_kart[j - 1].cost > video_kart[j].cost) {
					k = video_kart[j - 1].cost;
					video_kart[j - 1].cost = video_kart[j].cost;
					video_kart[j].cost = k;

					c = video_kart[j - 1].name;
					video_kart[j - 1].name = video_kart[j].name;
					video_kart[j].name = c;

					t = video_kart[j - 1].director;
					video_kart[j - 1].director = video_kart[j].director;
					video_kart[j].director = t;
				}
			}
		}


		for (int i = 0; i < 10; i++) {
			if ((video_kart[i].name != 5) && (video_kart[i].name != 8)) {
				std::cout << "Name - " << video_kart[i].name << "  ";
				std::cout << "Cost - " << video_kart[i].cost << "  ";
				std::cout << "Director - " << video_kart[i].director << "  ";

				std::cout << "\n";
			}
		}
		//-------------------------------------------------

		std::cout << "\n\n\n";

		//--------------------------------------------------------
		//фильмы 3го режесера
		std::cout << "VIDEO KART (d)" << "\n\n";
		for (int i = 0; i < 10; i++) {
			if (video_kart[i].director == 3) {
				std::cout << "Name - " << video_kart[i].name << "  ";
				std::cout << "Cost - " << video_kart[i].cost << "  ";
				std::cout << "Director - " << video_kart[i].director << "  ";

				std::cout << "\n";
			}
		}
		//--------------------------------------------------------


		return 0;
}