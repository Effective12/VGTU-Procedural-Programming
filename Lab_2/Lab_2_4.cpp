#include <stdio.h>

using namespace std;

double harmonicMean ( double x, double y );


int main(void)
{
	double first, second;
	double result;

	printf("Enter two numbers: ");
	if ( scanf( "%lf %lf", &first, &second ) == 2 ) {
		result = harmonicMean(first, second);
		printf( "The harmonic mean of %.2f and %.2f is : %f \n" , first, second, result  );
}

}

double harmonicMean ( double x, double y ) {
	double result = 2 / (1 / x + 1 / y);
	return result;
}
