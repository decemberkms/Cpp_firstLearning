#include <iostream>

using namespace std;

int foo(int x, int y);



int main()
{
	int x = 1, y = 2;

	//arguments and parameters

	foo(6, 7); // there are arguments - actual parameters
	foo(x, y + 1);

	return 0;
}

int foo(int x, int y)
{
	return x + y;
} // x and y are destroyed here