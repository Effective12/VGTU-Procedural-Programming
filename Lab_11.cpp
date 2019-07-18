#include <iostream>

using namespace std;


int main () {


	int array[8];

	for (int i = 0; i < 8; i++) {

		cout << "Please enter " << i+1 << "th number\n";
		cin >> array[i];

	}
	
	for (int i = 7; i >= 0; i-- ) {
	
		cout << "Reverse order : "<< array[i] << "\n";

	}



}
