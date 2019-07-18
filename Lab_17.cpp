#include <iostream>

using namespace std;

int main () {

	double money = 1000000;
	int years = 0;
	double interest;
	while ( money >= 0) {
	
		interest = (money * 0.08) - 100000;
		money += interest;
		years += 1;
		if ( money <= 0 ) {
			break;
		}
		cout << "Money left in the account: " << money << " , years: " << years << "\n";


	}

}
