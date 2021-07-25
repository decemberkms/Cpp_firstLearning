#include <iostream>

using namespace std;


int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

int main()
{
	cout << add(1, 2) << endl; // this is determined during compiling
	cout << add(3.0, 4.0) << endl;
	
	return 0;
}