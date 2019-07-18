#include <stdio.h>
#include <algorithm>

using namespace std;

void replace_ (double &x, double &y, double &z);


int main () {

	double x, y, z;
	printf("Please enter 3 numbers \n");
	if (scanf("%lf %lf %lf", &x, &y, &z) == 3) {
		printf("Values before the function are: \n %lf = %p \n %lf is = %p \n %lf is = %p \n", x, &x, y, &y, z, &z);
			
		replace_(x, y, z);
		
		printf("Values after the function are: \n %lf = %p \n %lf is = %p \n %lf is = %p \n", x, &x, y, &y, z, &z);

	} else {
		printf("Please enter correct values.");

	}
	

}


void replace_ (double &x, double &y, double &z) {

	double a[] = { x, y, z};
	sort(a , a + 3);
	
	double *b[] = { &x, &y, &z };
	sort (b, b + 3);
	*b[0] = a[0];
	*b[1] = a[1];
	*b[2] = a[2];
	

}


