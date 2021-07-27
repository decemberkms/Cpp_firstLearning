#include <iostream>
#include <string>

using namespace std;

int main()
{
													//syntax error
	//int x
	
													//semantic error 
	//int x;
	//cin >> x;

	//if (x >= 5) // semantic error
	//	cout << "xis greater than 5" << endl;

													//violated assumption

	string hello = "Hello my name is Minsung";

	int ix;
	cin >> ix;


	
	cout << hello[ix] << endl;

	return 0;
}