#include <iostream>

using namespace std;

void print(int x, int y); // default is defined at only one place // usually header

void print(int x = 0, int y= 100) //default parameter
{// default value must keep/ x,y=10,z=10  or x,y,z=20      x,y=20,z  -- << not possible
	cout << x << endl;
	cout << y << endl;
}
// default is affected by overloading
int main()
{

	print();
	print(10);

	return 0;
}