#include <iostream>
using namespace std;
void main() {
	int luku1, luku2;
	cout << "Anna kaksi kokonaislukua"<<endl;
	cin >> luku1;
	cin >> luku2;
	if (luku1 == luku2) {
		cout << "BINGO"<<endl;
	}
	else {
		cout << "BONGO"<<endl;
	}
}