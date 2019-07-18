#include <iostream>
#include <stdio.h>

using namespace std;

double points (float first, float second) {

	return (first - second) / ( first * second );

}


int main () {

	float first;
	float second;
	float result;

	while (scanf) {
		cout << "Please enter the first number ( 'q' to exit ) \n";		
		
		if ( scanf("%f", &first ) == 0 ) {
			break;
		}
		cout << "Please enter the second number ( 'q' to exit ) \n";
		
		if ( scanf("%f", &second ) == 0 ) {
			break;
		}

		result = points (first, second);

		cout <<"The result of (first - second) / ( first * second ) is = " << result << "\n";

	}
	cout << "Exiting...";
}
