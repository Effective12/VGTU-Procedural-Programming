#include <iostream>
using namespace std; 



int main() {


	int money;	
	int sum;
	
		cout << "Enter the money you will get the firs day \n";
		cin >> money;
		
		
		for (int i = 1; i < 21; i ++ ) {
			
			sum = money + i;


		}
		cout << "Money at the 20th day is : " << sum << "\n";
		
}


