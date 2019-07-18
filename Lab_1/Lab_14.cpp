#include <iostream>

using namespace std;


int main () {

	double firstArray[8], secondArray[8], sum;
	
	for (int i = 0; i < 8; i++ ) {
	
		cout << "Please enter 8 values for the firs array \n";
		cin >> firstArray[i];
	
	
		sum += firstArray[i];
		secondArray[i] = sum;
		
	}
	cout << "First Array: ";
		
	for (int i = 0; i < 8; i++) {
	cout << firstArray[i] << " ";
	}
	cout << "\nSecont array: ";
	for (int i = 0; i < 8; i++) {
	
	cout << secondArray[i] << " ";
	}
	cout << "\n";


}
