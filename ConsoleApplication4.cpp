#include <iostream>
using namespace std;

int bin(int table[], int szukana) {
	int l = 0;
	int p = 15;
	int sr = (l + p) / 2;

	while (l <= p) {
		if (table[sr] == szukana) {
			return sr;
		}
		else if (table[sr] > szukana) {
			p = sr - 1;
		}
		else {
			l = sr + 1;
		}
		sr = (l + p) / 2;
	}
	return -1;
}

int main(){
	int szukana;
	int table[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

	cout << "Podaj szukaną liczbę: ";
	cin >> szukana;

	if (bin(table, szukana) == -1) {
		cout << "Nie znaleziono liczby.";
	}
	else {
		cout << "Pozycja liczby " << szukana << " to: " << bin(table, szukana);
	}
}