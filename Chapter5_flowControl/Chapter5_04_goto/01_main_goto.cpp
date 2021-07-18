#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;

	tryAgain: // label  -- like a book mark   // loop's(for,loop) father from basic

	cout << "Enter a non-negative number" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain;

	cout << sqrt(x) << endl;
	 
	return 0;
}