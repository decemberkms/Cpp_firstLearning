#include <iostream>

using namespace std;

int main()
{
	int x = 7;
	int y = 4;
	int z = x % y;

	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl;

	cout << -5 % 2 << endl;

	cout << endl;

	int z = x;
	z += y; // z = z + y;
	z -= y;
	z *= y;
	z /= y;
	z %= y;

	return 0;
}