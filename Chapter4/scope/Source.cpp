#include <iostream>
//#include "test.cpp" // possible but not common
#include "myConstants.h"


using namespace std;

int value = 123;
//int a = 1;
//void doSomething()
//{
//	static int a = 5; // - difference A static variable in a block is initialized only one time, prior to program executio
//	
//	++a;
//
//	cout << a << endl;
//}

//forward declaration
extern void doSomething();
extern int a;


int main()
{
	cout << value << endl;

	int value = 1;
	cout << ::value << endl;  // scope operator  in order to call variables declared in other scope > ::
	cout << value << endl; // name hiding -> global variable is hiden by this variable

	cout << a << endl;


	cout << endl;

	cout << "In main cpp: " <<Constants::pi << " " << &Constants::pi << endl;

	doSomething();
/*
	int g_x; // external linkage
	static int g_x; // interal linkage
	const int g_x; // X

	extern int g_z;
	extern const int g_z;

	int g_y(1);
	static int g_y(1);
	const int g_y(1);

	extern int g_w(1);
	extern const int g_w(1);


*/


	return 0;
}
