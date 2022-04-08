#include <iostream>
using namespace std;

int main()
{
	while (1 == 1) {
		int a;
		int b;
		string c;
		int d;
		int e;
		cout << "Wybierz NWD lub NWW: ";
		cin >> c;
		if (c == "NWD") {
			cout << "Podaj pierwsza liczbe: ";
			cin >> a;
			cout << "Podaj druga licze: ";
			cin >> b;
			cout << endl;
			while (a < b || a > b) {
				if (a > b) {
					a = a - b;
				}
				else if (b > a) {
					b = b - a;
				}
			}
			cout << "Największy wspólny dzielnik to: " << a << endl;
		}
		else if (c == "NWW") {
			cout << "Podaj pierwsza liczbe: ";
			cin >> a;
			cout << "Podaj druga licze: ";
			cin >> b;
			cout << endl;
			d = a;
			e = b;
			while (d != e) {
				if (d < e) {
					d = d + a;
				}
				else if (e < d) {
					e = e + b;
				}
			}
			cout << "Najmniejsza wspólna wielokrotność to: " << d << endl;
		}
		else if (c != "NWD" || c != "NWW") {
			cout << "Podano złą wartość" << endl;
		}
		cout << " " << endl;
	}
}

