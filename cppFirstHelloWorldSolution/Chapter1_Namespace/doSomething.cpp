#include <algorithm>
#include <iostream>

using namespace std; 
//#define LIKE_APPLE

void doSomething()
{
#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#else 
	cout << "Orange " << endl;
#endif
}