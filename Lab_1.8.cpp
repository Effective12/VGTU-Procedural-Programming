#include <iostream>
 using namespace std;

 int main () {

 	int firstNum , secondNum;

	int result = 0;

	while (result == 0) {


 	cout << "Enter next number for first operand (<= 0 to quit): \n";
 	cin >> secondNum;

 	if (secondNum == 0 ) {
 		cout << "Done \n";
 		break;
	 }

	cout << "Enter next number for second operand (<= 0 to quit) \n";
 	cin >> firstNum;

 	if (firstNum == 0 ) {
 		cout << "Done \n";
 		break;
	 }

 	result = firstNum % secondNum;

 	cout << "Result of : " << firstNum << " % " <<  secondNum << " is  " << result << "\n";

 	}
 }
