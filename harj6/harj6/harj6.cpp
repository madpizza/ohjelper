#include <iostream>
using namespace std;
void main() {
	int lompakko, hinta;
	cout << "Montako euroa lompakossa?" << endl;
	cin >> lompakko;
	cout << "Lihapiirakan hinta?" << endl;
	cin >> hinta;
	if (lompakko>=hinta) {
		lompakko = lompakko - hinta;
		cout << "Lompakkoon j�� " << lompakko << " euroa." << endl;
	}
	else {
		cout << "Paastoa"<<endl;
	}
}