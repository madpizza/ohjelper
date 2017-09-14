#include <iostream>
using namespace std;
int main() {
	float a, b, c;
	cout << "Anna eka reaaliluku: ";
	cin >> a;
	cout << "Anna toka reaaliluku: ";
	cin >> b;
	cout << "Anna kolmas reaaliluku: ";
	cin >> c;

	if (a >= b) {
		if (b >= c) {
			cout << a << " " << b << " " << c << endl;
		}
		else if (a >= c) {
			cout << a << " " << c << " " << b << endl;
		}
		else {
			cout << c << " " << a << " " << b << endl;
		}
	}
	else if (b >= c) {
		if (a >= c) {
			cout << b << " " << a << " " << c << endl;
		}
		else {
			cout << b << " " << c << " " << a << endl;
		}
	}
	else {
		cout << c << " " << b << " " << a << endl;
	}
}