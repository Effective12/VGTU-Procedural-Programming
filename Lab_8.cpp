#include <iostream>
#include <stdio.h>

using namespace std;

int main () {

	float first;
	float second;
	
	
	
	while (scanf) {
		cout << "Please enter the first number ( 'q' to exit ) \n";		
		
		if ( scanf("%f", &first ) == 0 ) {
			break;
		}
		cout << "Please enter the second number ( 'q' to exit ) \n";
		
		if ( scanf("%f", &second ) == 0 ) {
			break;
		}

		cout << "The result of (first - second) / ( first * second ) is = " <<(first - second) / ( first * second ) << "\n";

	}
	cout << "Exiting... \n";

}
