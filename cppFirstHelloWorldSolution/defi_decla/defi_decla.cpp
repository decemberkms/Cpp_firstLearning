#include <iostream>

using namespace std;

int add(int a, int b); // prototype!!!   forward declaration
int multi(int a, int b);
int subtract(int a, int b);

int main()
{

	cout << add(1, 2) << endl;

	return 0;
}



//definition
int add(int a, int b)
{
	return a + b;
}

int multi(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}
