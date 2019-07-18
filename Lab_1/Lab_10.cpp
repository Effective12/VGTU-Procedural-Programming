#include <stdio.h>
#include <iostream>
using namespace std;


int main () {


	int upper, lower;

while ( upper != lower ) {
	printf( "Please enter lower limit and upper limit ('q' to exit)\n");
	if ( scanf ("%d %d", &lower, &upper) == 0 || upper == lower) {
		printf("Exiting... \n");
		return 0;
	}
	int i = lower;
	int result = 0;
	int sum = 0;
	for (i; i <= upper; i++) {
		sum = i * i;
		result += sum; 
	}	
	
	printf("The sum of the squares from %d to %d is %d \n" , (lower * lower), (upper * upper), result);
}
}
