//Draw Big X Assignment
//draws a big x
//11/2/19 Chris Lu
//Sources:

#include <iomanip>
#include <iostream>
//#include <string>
using namespace std;

void drawRow(int a, string char1, int ogA);
void drawX(int a, string char1, int ogA);
int requestNumb(int& int1);
char requestChar(string& char1);

int main()
{
	int int1;
	string char1;
	int ogA;
//	cout << "this is what it will do" << endl;
	//requests an integer
	requestNumb(int1);
	ogA = int1;
	//requests a character
	requestChar(char1);

	//draws the X
	drawX(int1, char1, ogA);
	return 0;
}

//draw # of chars of given integer size
void drawRow(int a, string char1, int ogA){
string shape;
int i;

for (i = 0; i < ((ogA - a) / 2); i++)
	cout <<".";

for (i=0; i <= a; i++)
{

//the first and last characters are marked, else are dots
if (i == 0 || i == a)
	{  
   cout << char1;
	}
else 
	{  
   cout << '.';
	}
}

for (i = 0; i < ((ogA - a) / 2); i++)
{
cout << ".";
}
	cout << endl;
}

void drawX(int a, string char1, int ogA){
int i;

//draws the top half chars
for (i = a; i > 0; i--)
	{
//	cout << "i is" << i << endl;
	drawRow(i, char1, ogA);
	}

//draws the bottom half
for (i = 0; i < a; i++)
	{
//	cout << "i is" << i << endl;
	drawRow(i, char1, ogA);
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
char requestChar(string& char1)
{
	cout << "gimme a char" << endl;

	cin >> char1;
	cout << endl;
	if(char1 == "0")
	{
		char1 = '&';
	} 
//	cout << "char1 is " << char1 << endl;
}
