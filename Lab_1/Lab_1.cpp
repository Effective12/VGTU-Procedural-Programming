#include <iostream>
using namespace std;

int main () {
	char a = 'a';
	char array[26];
	for (int i; i < 26; i++) {
		array[i] = a + i;
		cout << array[i] << "\n";
	}

}
