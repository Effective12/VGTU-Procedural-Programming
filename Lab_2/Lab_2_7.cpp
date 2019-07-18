#include <iostream>
#include <fstream>
#include <ctype.h>

using namespace std;

int main () 
{

	char data,data_;
	int ch;
	ifstream input("theFile.txt");
	while (!input.eof()) 
	{
		input >> data;
		data_ = (toupper(data));
		ch = data_;
		ch = ch - 64;
		if (ch <= 0) {
			ch = -1;
		}
		cout << data << "  =  " << ch <<"\n";

	}
		
	input.close();



}
