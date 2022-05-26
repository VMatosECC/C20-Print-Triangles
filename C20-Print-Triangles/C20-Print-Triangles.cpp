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

void printColumn(int n)
{
	if (n == 0) {
		cout << endl;
		return;
	}
	cout << "*";
	printColumn(n - 1);
}
//-------------------------------------
void printTrigBaseUp(int n)
{
	if (n == 0) {
		cout << endl;
		return;
	}
	printColumn(n);
	printTrigBaseUp(n - 1);
}
//------------------------------------------
void printTrigBaseDown(int n, int N)
{
	if (n > N) {
		cout << endl;
		return;
	}
	printColumn(n);
	printTrigBaseDown(n + 1, N);
}



void printTrigBaseDown(int n)
{
	printTrigBaseDown(1, n);
}


//-----------------------------------------------


int main()
{
	printTrigBaseUp(8);   //Base UP triangle
	printTrigBaseDown(8); //Base DOWN triangle
}


