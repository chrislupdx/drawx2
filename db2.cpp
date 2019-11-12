//Draw Big X Take 2
//drawas an big x with characters requested by user and size requested by user
//11/10/19 Chris Lu
//Sources: non

#include <iomanip>
#include <iostream>
using namespace std;

int oneLine( string&, int, char='X');
void drawX(int a, char c, int ogA);
int requestNum(int& int1);
char requestChar(char& char1);

int main()
{
	int int1;
	string stringChar, str;
	char c;
	int ogA;
	cout << "this program takes an integer and char and draws an X of the size of the int with the character" << endl;

while (int1 != 0)
{
	//request an integer
	requestNum(int1);
	ogA = int1;

	//requests a character
	requestChar(c);

	//draws the x
	drawX(int1, c, ogA);	
}


	return 0;
}

int oneLine(string& line, char c, int ogA){
int i;
const char *d = &c;
string dot = ".";
cout << line << endl;
return 0;

}

void drawX(int int1, char c, int ogA){
string str = "";	
int i, x;
const char *d = &c;
string char1 = "";
char dot = '.';
int left = ogA;
int right = 0;
//the do/while loop to increment and decrement left and right.
do
{

for (x = 0; x < ogA; x++)
{
	str.insert(0,1, dot);
}

oneLine(str, c, ogA);

//str.replace(0,1, char1);
//str.replace(ogA, 1, char1);

for (i = 1; i < ogA; i++)
{
	cout << str << endl;
}

}
while(i < ogA );
}

int requestNum(int& int1)
{
do 
{
	cout << "gimme a number" << endl;
	cin >> int1;

}
while(int1 < 0);
}



//requests acharacter to draw the x with, if the char is 0, dealer's choice
char requestChar(char& c)
{
	cout << "gimme a char" << endl;

	cin >> c;
	cout << endl;
	if(c == 0)
	{
		c = '&';
	}

}
