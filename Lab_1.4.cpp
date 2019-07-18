#include <iostream>
//#include <math>
using namespace std;

int main () {
	
	double feet ;
	double inces ;
	double height = 1 ;
	
	while (height != 0 ) {
		cout << "Enter a height in centimeters (<=0 to quit): ";
		cin >> height;	
		if (height <= 0){
			break;
		}	
			
		feet = height * 0.0328 ;
		inces = height * 0.3937;
		
		cout << "In cm = " << height << "  , in inches = " << inces << ", feet :"  << feet  << "\n";	
	}
	

	
}
