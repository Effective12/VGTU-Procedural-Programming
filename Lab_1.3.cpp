#include <iostream>
using namespace std;

int main () {
	
	
	int weeks ;
	int days;
	int input = 1 ;
	//cout << "Enter days \n";
	while (input != 0 ) {
		cout << "Enter days ( 0 to exit )\n";
		cin >> input;	
		if (input <= 0) {
			break;
		}
		if (input >= 7) {
			
			weeks = input / 7;
			days = input % 7;
		}
		cout << "Weeks = " << weeks << " , days = " << days << "\n";
	}
	
	
}
