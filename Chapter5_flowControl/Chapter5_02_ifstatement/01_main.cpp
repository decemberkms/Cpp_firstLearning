#include <iostream>
#include <cstdlib>

using namespace std;

int min(int x, int y)
{
	// null statement
	// if (x > y)
	// ;   //.. I want to do nothing!
	
	//if (x > y) return y;
	//else return x;
	// or~



	return (x > y) ? y : x;
}

int main()
{
	int x;
	cin >> x;

	if (x > 10) // true or false (1) always true	
	{
		cout << x <<  " is greater than 10" << endl; 
		// scope stops here
	}
	else
	{
		cout << x << " is smaller than 10" << endl;
	}

	if (x > 10) // true or false (1) always true	
	{
		cout << x << " x is reassigned" << endl;
		x = 100;
	}
	else if (x < 0)
	{
		return 0; // halt the program
	}
	else
	{
		cout << "Nothing happened" << endl;
	}

	cout << x << endl;

	x = 1;
	if (x == 1)  // x =0 -> put 0 into x then compare. so in this case always false
	{
		cout << "X = 1 if" << endl;
	}
	else if ( x == 1)   // this case the flow stops at if as it's already met
	{
		cout << "X = 1 else if" << endl;

	}

	return 0;
}