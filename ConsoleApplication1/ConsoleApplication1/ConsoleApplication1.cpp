#include <iostream>
using namespace std;
void Funkcja(char tab[],int klucz) {
	int dl;
	dl = strlen(tab);
	if (!(klucz >= -26 && klucz <= 26)) {
		return;
	}
	else if (klucz >= 0) {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz <= 'z') {
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i] + klucz - 26;
			}
		}
	}
	else {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz >= 'a') {
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i] + klucz + 26;
			}
		}
	}
}
int main() {
	int klucz;
	char tab[1000];
	cout << "Podaj klucz: ";
	cin >> klucz;
	cout << "Podaj słowo: ";
	cin >> tab;
	Funkcja(tab, klucz);
	cout << "Przed rozszyfrowaniem: " << tab << endl;
	Funkcja(tab, -klucz);
	cout << "Rozszyfrowane: " << tab;
}