#include <iostream>

using namespace std;

int main()
{
	//const int value = 5;  // const! then ptr also needs const!!
	//const int* ptr = &value;
	////*ptr = 6;

	//cout << *ptr << endl;

	//int value = 5;
	//const int* ptr = &value;
	//value = 6;
	//cout << *ptr << endl;  but this is possible

	int value1 = 5;
	const int* ptr = &value1;
	
	cout << *ptr << endl;

	int value2 = 6;
	ptr = &value2;

	cout << *ptr << endl;


	return 0;
}