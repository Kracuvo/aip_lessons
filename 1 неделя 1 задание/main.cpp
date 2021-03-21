#include <iostream>
#include <fstream>
#include <string>

//написать первую букву своего имени звездочками

void myTextWrite();
void TextRead();

int main()
{
	TextRead();
}

void TextRead() {
	std::string word;
	std::fstream f("text.txt", std::ios::in);

	if (f.is_open()) {
		std::cout << "File started \n -------------------- \n";
		while (!f.eof()) {
			f >> word;
			std::cout << word << '\n';
		}
		f.close();
		std::cout << "\n -------------------- \n File end \n";
	}
	else
		std::cout << "Unable to open file";
}

void myTextWrite() {
	std::ofstream f;
	f.open("text.txt");
	f << " **********\n"
		" *\n"
		" *\n"
		" *\n"
		" **********\n"
		" *\n"
		" *\n"
		" *\n"
		" **********";
}