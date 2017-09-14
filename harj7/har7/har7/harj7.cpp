#include <iostream>
using namespace std;
int main() {
	unsigned short pituus, paino;
	char kokonimi[30], osoite[30];
	cout << "\nIhannepaino" << endl
		<< "\nOhjelma laskee ihannepainosi"
		<< "\npituutesi perusteella." << endl
		<< "\nAnna nimesi > ";
	cin.getline(kokonimi, 30);
	cout << "Anna pituutesi sentteina > ";
	cin >> pituus;
	cout << "Anna osoitteesi > ";
	cin.get();
	cin.getline(osoite, 30);
	cout << "Anna painosi kiloina > ";
	cin >> paino;
	cout << "\n\nArvoisa " << kokonimi << endl
		<< "Osoitteesi on " << osoite << endl
		<< "Nykyinen painosi on " << paino << ".0 kg" << endl
		<< "Ihannepainosi on " << pituus - 100 << ".0kg" << endl
		<< "Erotus " << paino - (pituus - 100) << ".0 kg" << endl;
}