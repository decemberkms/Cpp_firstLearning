#include <iostream>
#include <cmath>

using namespace std;

int pow(int base, int exponent)
{
	int retult = 1;
	for (int count = 0; count < exponent; ++count)
		retult *= base;

	return retult;
}

int main()
{
	//int count = 0;    //possible!
	//for (; count < 10; ++count) // ++count happends after { cout << count << endl; }
	//{
	//	cout << count << endl;
	//}

	//int count = 0;   //infinite loop!
	//for (;;++count)
	//{
	//	cout << count << endl;
	//}

	//for (int count = 0; count < 10; ++count) // ++count happends after { cout << count << endl; }
	//{
	//	cout << count << endl;
	//}

	cout << pow(2, 4) << endl;

	for (int i = 0, j = 0; i < 10; ++i, --j)
	{
		cout << i << " " << j << endl;
	}

	for (int i = 0, j = 0; (i+j) < 10; ++i, ++j)
	{
		cout << i << " " << j << endl;
	}


	return 0;
}