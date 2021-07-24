#include <iostream>

using namespace std;

//void pointer, generic pointer

int main()
{                         // void pointer can holdd any time but impossible to dereference, of course you can do casting then dereference

	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;
	//ptr = &c;

	//int* ptr_i = &i;

	//cout << ptr_i << endl;;
	//cout << ptr_i + 1 << endl;

	//cout << ptr + 1 << endl; // not possible point arithmetic!! don' knwo what to add( data type)
	//cout << *ptr << endl;  // dereferencing is not possible too
	cout << *static_cast<float*>(ptr) << endl;

	return 0;
}