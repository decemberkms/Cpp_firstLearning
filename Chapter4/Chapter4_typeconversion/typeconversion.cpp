#include <iostream>
#include <typeinfo>
#include <iomanip>


int main()
{
	using namespace std;

	float a = 1.0f;
	double d = a;  	// numeric promotion    small to big -> no problem

	int i = 129;
	char c = i; 	//numeric conversion   big to small -> problem

	cout << static_cast<int>(c) << endl;

	cout << std::setprecision(12) << a << endl;

	cout << 5u - 10u << endl; // do not combine unsigned with signed


	int z = (int)4.0;
	int k = int(4.0);

	//int, unsigned int
	
	//int a = 123.1;
	//cout << a << endl;
	//cout << typeid(a).name() << endl;



	return 0;
}