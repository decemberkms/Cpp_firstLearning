#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double *ptr)
{	
	cout << "Address of ponter variable in main()" << &ptr << endl;
	if (ptr != nullptr)
	{
		cout << *ptr << endl;// do something
	}
	else
	{
		cout << "Null tpr, do nothing" << endl; // do nothing
	}

}

int main() 
{
	double *ptr = 0; // c-style  0 or NULL
	double* ptr0 = nullptr;  // {nullptr} or {0}
	double d = 123.4;
	double *ptr2 = &d;

	doSomething(ptr);
	doSomething(nullptr);
	doSomething(ptr2);

	std::nullptr_t nptr;


	cout << "Address of ponter variable in main()" << &ptr << endl;

	return 0;
}