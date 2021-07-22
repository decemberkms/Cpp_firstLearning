#include <iostream>

using namespace std;

void doSomething(const int& x)
{
	cout << x << endl;
}

int main()
{
	//const int x = 5;
	//const int& ref_x = x;
	//
	//const int& ref_2 = x;
	//cout << ref_x << endl;
	//cout << ref_2 << endl;
	int a = 1;
	doSomething(a); // a can be put regardlessof const 

	doSomething(1 + a); //with const, it's like python
	
	return 0;
}