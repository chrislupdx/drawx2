//Draw Big X Assignment
//draws a big x
//11/2/19 Chris Lu
//Sources:

#include <iomanip>
#include <iostream>
//#include <string>
using namespace std;

void drawRow(int a, char char1);
void drawX(int a, char char1);
int requestNumb(int& int1);
char requestChar(char& char1);

int main()
{
	int int1;
	char char1;
//	cout << "this is what it will do" << endl;

	//requests an integer
	requestNumb(int1);

	//requests a character
	requestChar(char1);

	//draws the X
	drawX(int1, char1);
	return 0;
}


//draw # of chars of given integer size
void drawRow(int a, char char1){

string shape;
int i;

//for the the usr-given number, 
for (i=0; i <= a; i++)

	{
	//the first and last characters are marked, else are dots
//	if (i == 0 || i == a) {
	if (i == 0){
	cout << char1;
	}
	else {
	cout << '.';	
	}	
	if (i == a){
	cout << char1;
	}	
	
//the way this one is printing needs moar dynamic	
	}
	//if iterable position is before the marker's spot add x spaces
	//where x is i - (not sure)
	cout << endl;
}

void drawX(int a, char char1){

int i;

//draws the top half chars
for (i = a; i > 0; i--)
	{
//	cout << "i is" << i << endl;
	drawRow(i, char1);
	}

//draws the bottom half
for (i = 0; i <= a; i++)
	{
//	cout << "i is" << i << endl;
	drawRow(i, char1);
	}
}


//the user request prompt is in a funciton rejects negatives, 
//needs to quit on zero
int requestNumb(int& int1)
{
do {
	cout << "gimme an integer" << endl;
	cin >> int1;
   }
while(int1 < 0);
}

//Requests character to draw the X with, if char is 0, dealer's choice
char requestChar(char& char1)
{
	cout << "gimme a char" << endl;

	cin >> char1;
	cout << endl;
	if(char1 == '0')
	{
		char1 = '&';
	} 
//	cout << "char1 is " << char1 << endl;
}
