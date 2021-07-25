#include <iostream>

using namespace std;

inline int min(int x, int y)  // it's a proposal - compiler does it automatically
{
	return x > y ? y : x;
}


int main()
{
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;

	//inline function sees it like below
	cout << (5 > 6 ? 6 : 5) << endl;
	cout << min(3, 2) << endl;

	return 0;
}