#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	char ch;
	int i, j;
	printf("Please enter a character, start number and finish number: ");
	if (scanf("%c %u %u", &ch, &i, &j) == 3) {
		chline(ch, i, j);
	}
}


void chline ( char ch, int i, int j) {
	
	for ( i; i < j; i++ ) {
			printf( "%c" , ch );
		} 
	printf("\n");
	
}


