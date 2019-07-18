#include <iostream>
using namespace std;

int main () {

char ch = 'A';
	for (int i = 0 ; i < 7 ; i++) {

		for (int j = 0; j < i; j++) { 
			
			char a = ch + j;
			cout << a ; 
			 
	
		}
		ch = ch + i;
		cout << "\n";	

	}
		

}
