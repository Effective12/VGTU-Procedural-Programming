#include <iostream>

using namespace std;

void average_of_set (double a[3][5], int n);
double average_all (double a[3][5]);
double maximum_value( double a[3][5]); 

	
int main () 
{

	double array[3][5];
	int i,j;
	
	
	for ( i = 0; i < 3; i++ ) 
	{
		for ( j = 0; j < 5; j++) 
		{
			cout << "Please enter the " << i << ", " << j << " value\n";
			cin >> array [i][j];

			
		}
				
	}

	cout << "You array is : \n";
	for ( i = 0; i < 3; i++ ) 
	{
		for ( j = 0; j < 5; j++) 
		{
			cout << array[i][j] << " , [" << i+1 << "]["<< j+1 <<"]\n";
		}	
	}


	for ( i = 0; i < 3; i++) {
		average_of_set (array, i); 
	}
	double result = average_all(array);										
	double max = maximum_value( array);

}

double average_all ( double a[3][5])
{

	int count = 0;
	double sum = 0;
	for ( int i = 0; i < 3; i++ ) 
	{
		for (int j = 0; j < 5; j++) 
		{
				count += 1;
				sum += a[i][j];
		}


	}
	double result = sum / count;
	cout << "The average of all numbers is : "<< result << "\n";
	return result;
}


void average_of_set ( double a[3][5], int n) 
{
	
	double sum,count, result;
	result = 0;
	sum = 0;
	count = 0;
	cout << "The average of set : " << n << " is : \n";
	for ( int i = 0; i < 5; i++ ) 
	{
		count = count + 1;
		sum += a[n][i];
	}

	result = sum / count;
	cout  << result << "\n";
	
}

double maximum_value ( double a[3][5]) 
{

	double max = 0;
	double count = 0;
	for ( int i = 0; i < 3; i++ ) 
	{
		for ( int j = 0; j < 5; j++) 
		{
			if (a[i][j] > max) {
				max = a[i][j];
			}
		}	
	}	
	cout << "The max value in the set is : " << max << "\n";
	return max;
}	
	


