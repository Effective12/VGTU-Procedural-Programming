#include <stdio.h>

using namespace std;

double min ( double x, double y);


int main () {
	double first, second, result;
	printf("Enter two values you want the find minimum of:  ");
	scanf("%lf %lf", &first, &second);
	result = min(first, second);
	printf( "Min value is %lf \n", result );
	
	
	
}


double min ( double x, double y) {



	if ( x < y ) {
		return x;
	}

	if ( x > y ) {
		return y;
		
	}
	

}
