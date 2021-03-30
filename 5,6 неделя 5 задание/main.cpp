#include <iostream>

//Пользователь вводит день месяца. Вывести на экран день недели. Считаем, что 1-е число месяца – это вторник.
//Модификация задачи - Пользователь также вводит число от 1 до 7, обозначающее 
//номер недели для первого числа месяца.

int main() {

	setlocale(LC_ALL, "Russian");

	int date, day;

	std::cout << "Введите номер первого дня месяца: "; std::cin >> day;
	std::cout << "Введите день месяца: "; std::cin >> date;

    if (day > 7 || day < 1 || date > 31 || date < 1) {
        for (int i = 0; i < 54; i++) {
            std::cout << "error\n";
        }
        return 0;
        exit(0);
    }

    date = date % 7 + day - 1;
    if (date >= 7) date -= 7;

    switch (date) {
    case 0: std::cout << "Воскресенье" << std::endl; break;
    case 1: std::cout << "Понедельник" << std::endl; break;
    case 2: std::cout << "Вторник" << std::endl; break;
    case 3: std::cout << "Среда" << std::endl; break;
    case 4: std::cout << "Четверг" << std::endl; break;
    case 5: std::cout << "Пятница" << std::endl; break;
    case 6: std::cout << "Суббота" << std::endl; break;
    }

    return 0;
}


