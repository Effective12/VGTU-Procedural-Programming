#include <stdio.h>

using namespace std;


void larger_of(double *x, double *y);

int main () {

	double x, y;
	printf("PLease enter two numbers\n");
	if (scanf("%lf %lf", &x, &y) == 2) {
	
		larger_of(&x, &y);
		printf("The new values of numbers are %.2f and %.2f\n", x, y);
	}
}


void larger_of(double * x, double * y)
{
	// replace contents of 
	if (*x > *y) *y = *x;
	else *x = *y;
}
