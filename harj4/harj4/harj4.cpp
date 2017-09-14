#include <iostream> //n‰ytˆn ja n‰ppiksen k‰yttˆˆnotto
using namespace std;
#define MINIMI 10 // MINIMI:n m‰‰rittely pysyv‰ksi VANHA TAPA
const int MAKSIMI = 20; // MAKSIMI:n m‰‰rittely uudella tavalla pysyv‰ksi
int summa; //summa:n valmistelu muuttujaksi
void Laske(int, int); // aliohjema Laske:n esittely
void main() { //p‰‰ohjelma alkaa
	int luku1 = 2; //luku1:n valmistelu ja m‰‰rittely p‰‰ohjelman sis‰ll‰ k‰ytett‰v‰ksi
	int luku2; //luku2:n valmistelu p‰‰ohjelman sis‰ll‰ k‰ytett‰v‰ksi
	cout << "Syˆt‰ luku: "; //oksentaa k‰skyn k‰ytt‰j‰lle
	cin >> luku2; //ottaa luvun k‰ytt‰j‰lt‰ ja sijoittaa sen luku2:een
	Laske(luku1, luku2); //heitt‰‰ luvut aliohjelmalle Laske
	if (summa < MINIMI) {
		cout << "Summa on pienempi kuin " << MINIMI << endl;
	}
	else if (summa > MAKSIMI) {
		cout << "Summa on pienempi kuin " << MAKSIMI << endl;
	}
	else {
		cout << "Summa on " << MINIMI << ":n ja " << MAKSIMI << ":n v‰liss‰." << endl;
	}
}
void Laske(int eka, int toka) { //aliohjelma alkaa, m‰‰rittelee muuttujat ohjelman sis‰lle
	summa = eka + toka; //laskee annetut luvut yhteen ja sijoittaa summa-muuttujaan
}