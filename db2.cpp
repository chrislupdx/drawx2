//Draw Big X Take 2
//drawas an big x with characters requested by user and size requested by user
//11/10/19 Chris Lu
//Sources: non

#include <iomanip>
#include <iostream>
using namespace std;

void oneLine( string&, int, char='X');
void drawX(int a, string char1, int ogA);
int requestNum(int& int1);
char requestChar(string& char1);

int main()
{
	int int1;
	string char1;
	int ogA;
	cout << "this program takes an integer and char and draws an X of the size of the int with the character" << endl;

while (int1 != 0)
{
	//request an integer
	requestNum(int1);
	ogA = int1;

}


	return 0;
}

int requestNum(int& int1)
{
do 
{
	cout << "gimme an integer" << endl;
	cin >> int1;
}
while(int1 < 0);
}

