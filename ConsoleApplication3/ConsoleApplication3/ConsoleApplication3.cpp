#include <iostream>
using namespace std;
int main()
{
	int n;
	int lp = 0;
	int p = 2;
	int x = 0;

	cout << "Ile licz pierwszych chcesz wywwietlic?: ";
	cin >> n;
	cout << "Twoje iczby pierwsze to: ";
	while (lp < n) {
		x = 0;
		for (int d = 2; d <= p - 1; d++) {
			if (p % d == 0) {
				x = 1;
			}
		}

		if (x == 0) {
			cout << p << " ";
			lp = lp + 1;
		}
		p = p + 1;
	}
}