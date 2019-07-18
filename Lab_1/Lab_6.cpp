#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	int lower, upper;
	cout << "Enter the lower liimit \n";
	cin >> lower;
	cout << "Enter the upper limit \n";
	cin >> upper; 
	
	cout << "Interger | Square  | Cube\n";

	for (int i = lower; i <= upper; i++) {
		cout << setw(9) << i << "|" << setw(9) << i * i << "|"<< setw(9) << i * i * i << "\n";
		
	}





}
