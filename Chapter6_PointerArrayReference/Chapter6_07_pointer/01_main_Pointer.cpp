#include <iostream>

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
	double *prt_d = &d;

	cout << prt_d << endl;
	cout << *prt_d << endl;



	return 0; 
}