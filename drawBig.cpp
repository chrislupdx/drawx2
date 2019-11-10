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
int left, right;
left = 0;
right = ogA;
//start spaces
for (i = 0; i < ((ogA - a) / 2); i++)
	cout <<".";

for (i=0; i <= a; i++)
{

//the first and last characters are marked, else are dots
if (i == left || i == right)
	{  
//   cout << char1;
	}
else 
	{  
 cout << '.';
	}

cout << "left before" << left << endl;
cout << "right before" << right << endl;
++left;
--right;
}

//start at first and last chars and increment inwards (+1/-1)
//I think incrementng will work 

// end row spaces
for (i = 0; i < ((ogA - a) / 2); i++)
{
cout << ".";
}
	cout << endl;
}

void drawX(int a, string char1, int ogA){
int i;

//should draw the whole shape
for (i = a; i > 0; i--)
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
