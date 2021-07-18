#include <iostream>

using namespace std;


void doSomething(int x)
{
	x = 123;
	cout << x << endl; // #2
}

int main()
{
	int x = 0;
	cout << x << endl; // #2
	doSomething(x);
	cout << x << endl; // #3

	return 0;
}


//int main()
//{	
//	/*int x = 0;
//	int x = 1;*/  // not possible
//
//	int x = 0;
//	cout << x << " " << &x << endl;
//
//	{
//		int x = 0;
//		cout << x << " " << &x << endl;
//	}
//
//	{
//		int x = 2;
//
//	}
//	
//	//int x(0); // x = 0;
//
//
//	return 0;
//}