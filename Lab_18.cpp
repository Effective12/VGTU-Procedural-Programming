#include <iostream>

using namespace std;

int main () {

	int friends = 5;
	int weeks = 0;
	int change;
	while ( friends <= 150 ) {
		
		weeks += 1;
		change = (friends - weeks) * 2;
		friends = change;
		cout << "Number of friends are: " << friends << " , week: " << weeks << "\n";
	}

}
