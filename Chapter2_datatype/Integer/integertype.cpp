#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
int main()
{
	short		s = 1;  // 2byes = 2 * 8 = 16 bits  2^16
	int			i = 1;
	long	    l = 1;
	long long   ll = 1;

	cout << sizeof(s) << endl;
	cout << sizeof(i) << endl;
	cout << sizeof(l) << endl;
	cout << sizeof(ll) << endl;

	cout << std::pow(2, 16) - 1 << endl; // 65535 the biggest num in unsigned int
	cout << std::pow(2, 16 -1) - 1 << endl;  //32767  the biggest pos num in INT
	cout << std::numeric_limits<short>::max() << endl;  
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	cout << endl;
	short mynum = 32768;  // go around the num  -- overflow
	cout << mynum << endl; // oh real!
	short mynum2 = -32769;  // go around the num  -- overflow
	cout << mynum2 << endl; // oh real!


	cout << endl;
	cout << std::numeric_limits<int>::max() << endl;
	cout << std::numeric_limits<int>::min() << endl;
	cout << std::numeric_limits<int>::lowest() << endl;
	cout << endl;
	cout << std::numeric_limits<unsigned int>::max() << endl;
	cout << std::numeric_limits<unsigned int>::min() << endl;
	cout << std::numeric_limits<unsigned int>::lowest() << endl;

	cout << endl;
	unsigned int mynum3 = 4294967295;
	//unsigned int mynum3{ 4294967296 };
	cout << sizeof(mynum3) << endl;
	
	return 0;
}