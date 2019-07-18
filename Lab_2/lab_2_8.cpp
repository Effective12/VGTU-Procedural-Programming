#include <iostream>

using namespace std;

void fibonacci(int a);

int main () {

	int number;
	cout << "Enter how many turns do you want the Fibonacci Sequence to run: \n"; 
	cin >> number;
	fibonacci( number);

}

void fibonacci(int a) {
	int m = 0;
	int n = 1;
	int j;
	for (int i = 1; i < a+1; i++) {
	
		j = n;
		n = n + m;
		m = j;
		cout << i << "th turn is : " << m << "\n";
		
	}
	
}
