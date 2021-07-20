#include <iostream>

using namespace std;

//void printArray(int *array[]) == void printArray(int array[])   because these are just pointer!!!!!!!!!!!
void printArray(int array[])
{
	cout << sizeof(array) << endl;
	cout << *array << endl;

	*array = 100;
}

struct MyStruct
{
	int array[5] = { 9, 7, 5, 3, 1 };  // if array is in class or struct, it's not going to be changed into pointer
};


int main()
{
	


	int array[5] = {9, 7, 5, 3, 1};

	cout << array << endl;
	cout << &array[0] << endl;  // array  is a pointer -> not an array -> first byte address -> address

	cout << *array << endl; // first de reference -> 9! so pointer!

	char name[] = "Minsung";
	cout << *name << endl; // char is also pointer! static array = pointer!

	int *ptr = array; // this star is pointer variable
	cout << ptr << endl;
	cout << *ptr << endl;  // this star is de reference

	// |But not exactly the same!!!!!!!!!!!!!!!

	cout << sizeof(array) << endl; //20
	cout << sizeof(ptr) << endl; //4
	printArray(array); // 4  

	cout << array[0] << " " << *array << endl;  // this is global



	cout << *ptr << " " << *(ptr + 1) << endl;  // *(ptr + 1) point arithmetic
 
	return 0;
}