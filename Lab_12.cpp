#include <iostream>

using namespace std;


int main () {

	float start, finish;

	cout << "Please enter the starting number ( 0 or lower = exit ) \n";
	cin >> start;
	if (start <= 0) {
		cout << "Exiting...";
		exit(0);	
	}
	cout << "Please enter the finnishing number ( 0 or lower = exit ) \n";
	cin >> finish;
	if (start <= 0) {
		cout << "Exiting...";	
		exit(0);	
	}
	int i = start;
	float sumPlus, sumMulti = start;

	for ( i; i <= finish; i++ ) {

		sumPlus += start / i;
		if ( i % 2 != 0 ) {
			sumMulti += (-1 *start) / i;
		}
		else {
		sumMulti += start / i;
		}		
		cout << "First: "<< sumPlus << "\n";
		cout << "Second: " << sumMulti << "\n";	


	}
}
