#include <iostream>

using namespace std;

int add(int x, int y)
{
	int sum = x + y;

	return 0; // indenting!
}

int main()
{
	int x		  = -2; // 2 is a literal  x is variable
	int y		  = 11;
	int num_apple = 12;
	cout << "my home" << endl;  // operator  operand  - like 2 in an expresion

	// ternary operaotr
	int y = (x > 0) ? 1 : 2;
	cout << y;



	return 0;
}
