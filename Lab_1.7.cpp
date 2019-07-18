#include <iostream>
#include <cmath>

using namespace std;
 
 int main () {
	cout.precision(12);
 	double number;
 	double result;
 	cout << "Enter a double number (please use . as determiner)\n ";
 	
 	cin >> number;
	
	result = pow(number,3);
 	
 	cout << "Cube of you input is " << result << "\n";
 	
 }
