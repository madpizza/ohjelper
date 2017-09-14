#include <iostream>
using namespace std;
int main() {
	unsigned short x; //laskutoimituksen valinta
	int a, b;
	cout << "Anna eka kokonaisluku: ";
	cin >> a;
	cout << "Anna toka kokonaisluku: ";
	cin >> b;
	cout << "\nVALIKKO"
		<< "\n1. Summa"
		<< "\n2. Erotus"
		<< "\n3. Tulo"
		<< "\n4. Osamaara"
		<< "\n5. Jakojaannos" << endl << endl;
	cin >> x;
	switch (x) {
		case 1:
			cout << a + b << endl;
			break;
		case 2:
			cout << a - b << endl;
			break;
		case 3:
			cout << a*b << endl;
			break;
		case 4:
			cout << a / b << endl;
			break;
		case 5:
			cout << a%b << endl;
			break;
		default:
			cout << "Valitse laittamalla luku 1-5, tonttu." << endl;
	}
}