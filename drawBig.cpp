//Draw Big X Assignment
//draws a big x
//11/2/19 Chris Lu
//Sources:

#include <iomanip>
#include <iostream>

using namespace std;

//not sure what params drawRow should i/o
int drawRow(int a, int b);
int requestNumb(int int1);

int main()
{
	int int1;

	cout << "this is what it will do" << endl;

	//requests an integer
	requestNumb(int1);

	//drawrow only draws ONE row we need a function that
	//calculates and runs the row
	

	return 0;
}

int drawRow(int a, int b){
string shape;
//draw a line of the given integer size
//



return 0;
}

//the user request prompt is in a funciton
//needs to have logic to reject negatives, quits on zero
int requestNumb(int int1)
{
	cout << "gimme an integer" << endl;
	cin >> int1;
}
