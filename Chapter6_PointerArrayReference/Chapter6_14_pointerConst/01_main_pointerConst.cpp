#include <iostream>

using namespace std;

int main()
{
	//const int value = 5;  // const! then ptr also needs const!!
	//const int* ptr = &value;
	//*ptr = 6;  // de referencing to change the value

	//cout << *ptr << endl;

	//int value = 5;
	//const int* ptr = &value;  // I don't want to change the address!
	//*ptr =6 ; < it's not possible
	//value = 6; < but this is possible
	//cout << *ptr << endl;  but this is possible

	//int value1 = 5;
	//const int* ptr = &value1;
	//
	//cout << *ptr << endl;

	//int value2 = 6;
	//ptr = &value2;

	//cout << *ptr << endl;

	//int value = 5;
	//int* const ptr = &value;

	//*ptr = 10;
	//cout << *ptr << endl;


	int value = 5;
	const int *ptr1 = &value;
	int *const ptr2 = &value;
	const int *const ptr3 = &value;

	cout << ptr1 << endl;
	cout << ptr2 << endl; 
	cout << ptr3 << endl; 

	//int value2 = 8;
	//ptr = &value2;



	return 0;
}