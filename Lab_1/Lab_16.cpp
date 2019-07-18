#include <iostream>

using namespace std;


int main () {

	double daphne = 100;
	double deirde = 100;
	int years = 1;


	do {
		daphne += 100 * 0.1;
		deirde += deirde * 0.05;
		cout << "Daphne's investment: " << daphne << " , Deirde's investment: " << deirde << " , years: " << years << "\n";
		years += 1;

	}
	while (deirde <= daphne);


}
