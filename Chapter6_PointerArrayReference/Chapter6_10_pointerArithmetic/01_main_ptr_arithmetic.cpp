#include <iostream>

using namespace std;

int main() 
{
	//short value = 7;  //short 2 int 4 double 8 
	//short *ptr = &value;

	//cout << uintptr_t(ptr - 1) << endl;
	//cout << uintptr_t(ptr) << endl;
	//cout << uintptr_t(ptr + 1) << endl;   // data size move
	//cout << uintptr_t(ptr + 2) << endl;   // data size move
		

	//long long array1[] = { 9, 7, 5, 3, 1 }; // long 4  long long 8
	//long long *ptr = array1;

	//for (int i = 0; i < 5; ++i)
	//{
	//	cout << array1[i] << " " << (uintptr_t)&array1[i] << endl;// array is just a long standing data cells.
	//	cout << *(ptr + i) <<  " " << (uintptr_t)(ptr + i) << endl;

	//}


	char name[] = "Minsung Kim";

	const int n_name = sizeof(name) / sizeof(char);

	char *ptr = name;

	for (int i = 0; i < n_name; ++i)
	{
		cout << *(name + i); // char is also pointer
		cout << *(ptr + i); // char is also pointer
;	}


	return 0;
}