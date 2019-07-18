#include <stdio.h>

using namespace std;

void printLines (char ch, int x, int y);

int main () {

	char ch;
	int first, second;
	printf("Please enter one character and two integers \n");
	if ( scanf("%c %d %d", &ch, &first, &second ) == 3) {
		printLines(ch, first, second);
	}
	else {
		printf("Please enter correct values \n");
	}


}


void printLines (char ch, int x, int y) {

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			printf("%c", ch);
		}
		printf("\n");	
	}




}

