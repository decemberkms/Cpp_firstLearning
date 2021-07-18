#include <iostream>

using namespace std;

namespace work1
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void doSomething(int b)
	{
		a += 5;
	}
}
int main()
{
	int apple = 5;
	cout << apple << endl;
	
	{
		int apple = 1;  // name hiding
		//apple = 1;
		cout << apple << endl;
	}

	cout << apple << endl;
	work1::doSomething();
	cout << work1::a << endl;
	work2::doSomething(3);

	cout << work2::a << endl;
	
	return 0;
}