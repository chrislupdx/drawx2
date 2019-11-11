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

void drawRow(int a, string char1, int ogA){
string shape = char1;
string line = "";
int i;
int left, right;
left = 0;
right = ogA;

//encapsulateall 3 of these in a loop that repea

for (i = 0; i < ogA; i++)
{
	line.insert(left, ".");
}
if (line.length() == right)
{
	line.replace(right, 1 , shape);
}
	line.replace(left, 1, shape);

cout << line << endl;

--right;
++left;
//i'm having trouble figuring out the stop condition for this
//left and right shoul decrement/increment each time it's run 
//intuition says deal with the increments at a higher level,


}


void drawX(int a, string char1, int ogA){
int i;
//loops for number of times = input int
for (i = 0; i < a; i++)
	{
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
