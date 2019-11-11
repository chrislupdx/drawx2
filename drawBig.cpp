//Draw Big X Assignment
//draws a big x
//11/2/19 Chris Lu
//Sources:

#include <iomanip>
#include <iostream>
//#include <string>
using namespace std;

void drawRow(int a, string char1, int ogA, int left, int right);
void drawX(int a, string char1, int ogA);
int requestNumb(int& int1);
char requestChar(string& char1);

int main()
{
	int int1;
	string char1;
	int ogA;
	cout << "this program takes an integer and character and draws an X of the size of the int with the character" << endl;

while (int1 != 0)
{
	//requests an integer
	requestNumb(int1);
	ogA = int1;

	//requests a character
	requestChar(char1);

	//draws the X
	drawX(int1, char1, ogA);
}

	return 0;
}

void drawRow(int a, string char1, int ogA, int left, int right){
string shape = char1;
string line = "";
int i;

//encapsulateall 3 of these in a loop that repea
for (i = 0; i < ogA; i++)
{
	line.insert(0, ".");
}
	line.replace(right, 1, shape);
	line.replace(left, 1, shape);

cout << line << endl;

}

void drawX(int a, string char1, int ogA){
int i;
int left, right;
left = 0;
right = ogA - 1;

//loops for number of times = input int
for (i = 0; i < a; i++)
	{
	drawRow(i, char1, ogA, left, right);
	if (right > 0)
	{	
	--right;
	}
	if (left < ogA)
	{
	++left;
	}
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
}
