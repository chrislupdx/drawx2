//Draw Big X Assignment
//draws a big x
//11/2/19 Chris Lu
//Sources:

#include <iomanip>
#include <iostream>

using namespace std;

//not sure what params drawRow should i/o
void drawRow(int a);
int requestNumb(int& int1);

int main()
{
	int int1;

	cout << "this is what it will do" << endl;

	//requests an integer
	requestNumb(int1);
	
	drawRow(int1);
	

	return 0;
}

void drawRow(int a){
string shape;
int i;
//draw a line of the given integer size
for (i=0; i<a; i++)
{
	cout <<"*";
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
