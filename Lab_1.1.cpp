#include <iostream>
using namespace std;

int main () {
	
	
	const int conv = 60;
	int hour ;
	int minutes;
	int input = 1 ;
	while ( input != 0 ) {
		cout << "Enter minutes (0 to exit) \n";
		cin >> input;		
		if (input == 0) {
			break;
		}
		
		if (input >= 60) {
			
			hour = input / conv;
			minutes = input % conv;
		}
		
		cout << hour << " hour ," << minutes << " minutes \n";
	}
	
	
}
