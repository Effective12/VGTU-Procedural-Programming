#include <iostream>
#include <algorithm>

using namespace std;

void swap_values(double arrayA[10], int n);

int main () {
	double arrayA[10] = {654,15,654,21,0,50,52,3,11, 556};

	int n = sizeof(arrayA) / sizeof(arrayA[0]); 
	cout << "Before the function array is : \n";

	for (int i = 0; i < n; i++ ) {
		cout << arrayA[i] << "\n"; 
	}
	swap_values(arrayA, n);

	cout << "After the swap function array is : \n";	
	for (int i = 0; i < n; i++) {
		cout << arrayA[i] << "\n";
	}

	


}

void swap_values(double arrayA[10], int n) {

	double temp[10];
	for (int i = 0; i < n; i++) {
		temp[i] = arrayA[i];
	}
	int i = 0;
	int j = n;
	for (i; i < n; i++) {
		for ( j  ; j > i; j--) {
			arrayA[i] = temp[j];
		}
	}
}
