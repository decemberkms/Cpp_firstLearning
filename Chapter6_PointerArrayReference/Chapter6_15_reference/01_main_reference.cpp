#include <iostream>

using namespace std;


void doSomething(int &n)
{
	n = 10;
	cout << "do something" << endl;
}



int main()
{
	//int value = 5;
	//int *ptr = nullptr; // you can put this as a default
	//ptr = &value;
	//
	//int &ref = value;

	//cout << ref << endl;

	//ref = 10;  // *ptr = 10; the same as pointer   ref is like a alias for a variable
	//cout << value << " " << ref << endl;
	//cout << &value <<  " " << &ref << endl;
	//cout << ptr << endl; 
	//cout << &ptr << endl;
	

	//int value = 5;
	////int& ref; << ref must be initialized and mustn't be assigned as literal
	//int& ref = x;

	//const int y = 8;
	//const int& ref = y;  // ref must be exactly the same as value



	//int value1 = 5;
	//int value2 = 10;

	//int& ref1 = value1;

	//cout << ref1 << endl;

	//ref1 = value2;

	//cout << ref1 << endl;  // ref can be used normal once it's initialised



	int n = 5;
	
	cout << n << endl;

	doSomething(n); // very efficinet	

	cout << n << endl;

	return 0;
}