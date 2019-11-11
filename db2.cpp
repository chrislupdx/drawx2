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
	string stringChar;
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

int oneLine(string&, char c, int ogA){
string line = "";
int i;
int left, right;
left = ogA;
right = 0;

for (i = 0; i < ogA; i++)
	{
	line.insert(0, ".");
if (i == right)
{
	line.erase(right , 1);
	line.insert(right, 1, c);
}
//if (i == left - 1)
//{
//	line.insert((left -1), 1, ogA);
//}
//	cout << "left is" << left << endl;

	}	
cout << line << endl;
	return 0;
}

//make sure we get the args threaded right for the custom line function
void drawX(int int1, char c, int ogA){
string string;	
int i;

//loops for the number of times input
for (i = 0; i < ogA; i++)
	oneLine( string, c, ogA);
}

//this prompts the use for a number, exits on zero
int requestNum(int& int1)
{
do 
{
	cout << "gimme an integer" << endl;
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
