#include <fstream>
#include <iostream>

// Сделать конвертер величин.Формат ввода : Направление_Перевода Величина. Скорость вращения (градус в час, градус в минуту, радиан в минуту)



using namespace std;

float a, rez;
int choice;

void ReadWriteNumbers();
void GrChGrMin(float a);
void GrMinGrCh(float a);
void GrChRadMin(float a);
void GrMinRadMin(float a);
void RadMinGrMin(float a);
void RadMinGrChas(float a);

int main()
{
	cout << "Vvedite nomer zhelaemogo perevoda: \n"
		"1.Gradusi v chas v gragusi v minutu\n"
		"2.Gradusi v chas v radiani v minutu\n"
		"3.Gradusi v minutu v gragusi v chas\n"
		"4.Gradusi v minutu v radiani v minutu\n"
		"5.Radiani v minutu v gragusi v chas\n"
		"6.Radiani v minutu v gragusi v minutu\n"; 
	cin >> choice;
	cout << "Kol-vo = "; cin >> a;

	if (choice == 1)
	{
		GrChGrMin(a);
		cout << rez;
	}
	else if (choice == 2)
	{
		GrChRadMin(a);
		cout << rez;
	}
	else if (choice == 3)
	{
		GrMinGrCh(a);
		cout << rez;
	}
	else if (choice == 4)
	{
		GrMinRadMin(a);
		cout << rez;
	}
	else if (choice == 5)
	{
		RadMinGrChas(a);
		cout << rez;
	}
	else if (choice == 6)
	{
		RadMinGrMin(a);
		cout << rez;
	}
		
	ReadWriteNumbers();
	return 0;
}

void GrChGrMin(float a)
{
	rez = a * 60;
}
void GrChRadMin(float a)
{
	rez = (a * 57.32)*60;
}
void GrMinGrCh(float a)
{
	rez = a / 60;
}
void GrMinRadMin(float a)
{
	rez = a / 57.32;
}
void RadMinGrMin(float a)
{
	rez = a * 57.32;
}
void RadMinGrChas(float a)
{
	rez = ((a * 57.32) / 60);
}
void ReadWriteNumbers() {

	setlocale(LC_ALL, "Russian");

	float num1 = a;
	float num2 = rez;
	float num3 = choice;

	std::fstream f("text.txt", std::ios::out); // открываем для записи
	f <<"1.Gradusi v chas v gragusi v minutu\n"
		"2.Gradusi v chas v radiani v minutu\n"
		"3.Gradusi v minutu v gragusi v chas\n"
		"4.Gradusi v minutu v radiani v minutu\n"
		"5.Radiani v minutu v gragusi v chas\n"
		"6.Radiani v minutu v gragusi v minutu\n";
	f << "Выбор пользователя " << num3 << endl;
	f << "Kol-vo = " << num1 << endl;
	f << "Результат = " << num2 << endl;
	f.close(); // закрываем файл


	f.open("text.txt", std::ios::in); // открываем для чтения
	f << "1.Gradusi v chas v gragusi v minutu\n"
		"2.Gradusi v chas v radiani v minutu\n"
		"3.Gradusi v minutu v gragusi v chas\n"
		"4.Gradusi v minutu v radiani v minutu\n"
		"5.Radiani v minutu v gragusi v chas\n"
		"6.Radiani v minutu v gragusi v minutu\n";
	f << "Выбор пользователя " << num3 << endl;
	f << "Kol-vo = " << num1 << endl;
	f << "Результат = " << num2 << endl;
	f.close(); // закрываем файл

}






















