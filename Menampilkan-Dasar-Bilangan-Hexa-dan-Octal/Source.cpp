#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>

/* Created by Rizky Khapidsyah */

using namespace std;

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
	int a;
	cout << "Penggunaan ios::showbase\n";
	cout << "----------------------------\n";
	cout << "Decimal Hexadecimal Oktal \n";
	cout << "----------------------------\n";

	cout << setiosflags(ios::showbase);

	for (a = 1; a <= 15; a++) {
		gotoxy(4, a + 5);
		cout << dec << a << endl;
	}

	for (a = 1; a <= 15; a++) {
		gotoxy(15, a + 5);
		cout << hex << a << endl;
	}
	
	for (a = 1; a <= 15; a++) {
		gotoxy(25, a + 5);
		cout << oct << a << endl;
	}

	cout << "----------------------------\n";
	_getch();
	return 0;
}