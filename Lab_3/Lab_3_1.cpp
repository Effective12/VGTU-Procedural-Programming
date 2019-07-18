#include <iostream>
#include <algorithm>

using namespace std;

int  *sort_array(int array[], int n);

int main () {

	int array[] = {0,1,20,30,4, 50, 100, 200, 150, 700};
	int n =  sizeof(array)/sizeof(array[0]);
	for ( int i = 0; i < n; i++) {
		cout << array[i] << "\n";
	}
	int *abb = sort_array(array, n);
	cout << "New \n";
	 for ( int i = 0; i < n; i++) {
                cout << array[i] << "\n";
        }

}

int  *sort_array(int array[], int n){

	sort(array, array + n);
	return array;

}

