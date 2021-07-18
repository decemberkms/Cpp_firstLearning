#include <iostream>
#include "myConstants.h"

int a = 100;  
//extern int a = 100;

void doSomething()
{
	using namespace std;

	/*cout << "Hello !" << endl;*/

	cout << "In test.cpp: " << Constants::pi << " " << &Constants::pi << endl;
}