//Draw Big X Assignment
//draws a big x
//11/2/19 Chris Lu
//Sources:

#include <iomanip>
#include <iostream>

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

	drawX(int1, char1);
	return 0;
}


//draw a line of the given integer size
void drawRow(int a, char char1){
string shape;
int i;
for (i=0; i<a; i++)
{
	cout << char1;
}
	cout << endl;
}

void drawX(int a, char char1){
int i;

//draws the top half chars
for (i = a; i > 0; i--)
{
	drawRow(i, char1);
}

//draws the bottom half
for (i = 0; i < a; i++)
{
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
	if(char1 == '0')
	{
		char1 = '&';
	} 
	

//	cout << "char1 is " << char1 << endl;
}
