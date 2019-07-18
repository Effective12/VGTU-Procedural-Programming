#include <iostream>

using namespace std;

int main () {

	int i = 0;
	
	string word;
	cout << "Enter a word \n";
	cin >> word;
	int ln = word.length()-1;	
	char letter[ln];
	for (i;i <= ln; i++) { 
		letter[i] = word[i];

	}
	for ( ln ; ln >= 0 ; ln--) {		
		cout << letter[ln];

	}

	cout << "\n";

}
