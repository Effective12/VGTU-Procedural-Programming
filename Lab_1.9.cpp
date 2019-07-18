#include <iostream>
using namespace std;



void Temperatures (int fahrenheit) {


 		double celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
		double kelvin = celsius + 273.16;
 		cout << "Celsius :  " << celsius << " Kelvin is : " << kelvin << "\n";
		


 }

 int main () {


	double fahrenheit;
	
		
 	while ( cout << "Enter Fahrenheit tempreture ( 'q' to exit ): \n" ) {
		
 		if (scanf("%lf" , &fahrenheit) == 0 ) {
			cout << "Exiting \n";
			break;
		}	
		Temperatures(fahrenheit);
	 }
 }
