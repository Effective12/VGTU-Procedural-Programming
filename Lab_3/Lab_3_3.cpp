#include <iostream>
#include <algorithm>

using namespace std;

double difference(double array[], int n);

int main () {

	double array[] = {21,6,26,69,51,6,65,16,6,448, 66,65 ,13, 2,8};
	int n = sizeof(array) / sizeof(array[0]);
	cout << "This is our array: \n";
	for (int i = 0; i < n; i++){
		cout << array[i] << "\n";
	}
	int dif = difference(array, n);
	cout << "The difference beween max and min value in the array is : " << dif << "\n";


}

double difference(double array[], int n) {
	double max = array[0];
	double min = array[0];
	for (int i = 0; i < n; i++) {
		if ( array[i] > max) {
			max = array[i];
		}		
		if ( array[i] < min ) {
			min = array[i];
		}
	}
	return max - min;
}
