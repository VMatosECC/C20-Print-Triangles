#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/* --------------------------------------
Base UP triangle	Base DOWN triangle
****				*
***					**
**					***
*					****

--------------------------------------- */

void myCol(int n)
{
	if (n == 0) {
		cout << endl;
		return;
	}
	cout << "*";
	myCol(n - 1);
}
//-------------------------------------
void printTrigBaseUp(int n)
{
	if (n == 0) {
		cout << endl;
		return;
	}
	myCol(n);
	printTrigBaseUp(n - 1);
}
//------------------------------------------
void printTrigBaseDown(int n, int N)
{
	if (n > N) {
		cout << endl;
		return;
	}
	myCol(n);
	printTrigBaseDown(n + 1, N);
}



void printTrigBaseDown(int n)
{
	printTrigBaseDown(1, n);
}


//-----------------------------------------------


int main()
{
	printTrigBaseUp(4);   //Base UP triangle
	printTrigBaseDown(4); //Base DOWN triangle
}


