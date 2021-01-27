#pragma warning(disable:4996)

#include <conio.h>
#include <iostream>

/* Created by Rizky Khapidsyah */

#define pi 3.14

using namespace std;

class tabung {
private:
	int j, t;
	float v, k;
public:
	tabung();
	void keluaran();
};

int main() {
	system("cls");
	tabung s;
	s.keluaran();
	
	_getch();
	return 0;
}

tabung::tabung() {
	cout << "\n Menghitung Tabung" << endl << " -----------------" << endl << endl;
	cout << " Masukan Jari-jari = "; cin >> j;
	cout << " Masukan Tinggi = "; cin >> t;

	v = (pi * j * j) * t;
	k = (2 * (pi * 2 * j)) + t;
}

void tabung::keluaran() {
	cout << endl 
		<< " Volume Tabung = " << v << endl
		<< " Keliling Tabung = " << k << endl;
}