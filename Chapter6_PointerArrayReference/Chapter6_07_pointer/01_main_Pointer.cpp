#include <iostream>
#include <typeinfo>

using namespace std;

//int* doSomething() // possible

int main()
{
	//int x = 5;

	//cout << x << endl;
	//cout << (int)&x << endl; // address of operator

	////de-reference operator (*)


	//cout << *(&x) << endl;

	int x = 5;
	double d = 1.0;
	int* ptr_x = &x;   
	double *prt_d = &d;  //int*  int * either is fine.

	typedef int* pint;  

	pint ptr1 = &x, ptr2 = &x;	          //64 bit - > 8 bytye     32 bi -> 4byte


	cout << prt_d << endl;
	cout << *prt_d << endl;
	cout << typeid(*prt_d).name()<< endl;
	cout << "size of data double " << sizeof(*prt_d) << endl;
	cout << "size of pointer " <<  sizeof(prt_d) << endl;

	// even structure is 4 byte -> address
	return 0; 
}