#include <iostream>

using namespace std;

typedef  int* pint;

void foo(int* ptr)  // pointer is also a varible so the value is copied // pointer is also used like a reference for output
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;
	*ptr = 10;
}

int main()
{
	int value = 5;
	cout << value << " " << &value << endl;
	
	int* ptr = &value;

	cout << &ptr << endl; // pinter's address - different. pointer is also a variable
	// if you want to use * like reference for output purpose, you need to put them as a &value 
	// that is used in C alot.
	foo(ptr);
	foo(&value);

 	return 0;
}