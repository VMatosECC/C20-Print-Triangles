#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/* --------------------------------------
Base UP triangle	Base DOWN triangle
****                *
***                 **
**                  ***
*                   ****

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
void printTriangleBaseUp(int n)
{
	if (n == 0) {
		cout << endl;
		return;
	}
	printColumn(n);
	printTriangleBaseUp(n - 1);
}
//------------------------------------------
void printTriangleBaseDown(int n, int N)
{
	if (n > N) {
		cout << endl;
		return;
	}
	printColumn(n);
	printTriangleBaseDown(n + 1, N);
}



void printTriangleBaseDown(int n)
{
	printTriangleBaseDown(1, n);
}


//-----------------------------------------------


int main()
{
	printTriangleBaseUp(8);   //Base UP triangle
	printTriangleBaseDown(8); //Base DOWN triangle
}


