#include <iostream>
#include <algorithm>

using namespace std;

int find_index(int a[], int n);

int main () {

	int array[]={1,23,5,59,8954,48,48,55,54,33,32,1,2,558,85};
	int n = sizeof(array)/sizeof(array[0]);
	cout << "Array before the function : \n";
	for (int i = 0; i < n; i++) {
		cout << array[i] << "\n";
	}
	int index = find_index(array, n);

	cout << "The maximum values is at the index number: " << index << "\n";	
}

int find_index(int array[], int n) {

	int a = array[0];
	int b;
	for (int i = 0; i < n; i++) {
		if (array[i] > a) {
			a = array[i];
			b = i;
		}
	}
	return b;
}
