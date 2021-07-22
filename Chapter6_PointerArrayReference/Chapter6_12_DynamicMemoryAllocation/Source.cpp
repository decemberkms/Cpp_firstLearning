// three types of memory allocation
// Static - global/static variable
// Auto,  local/ block
// Dynamic   !!  pointer!

#include <iostream>


int main()
{

	using namespace std;

	//int array2[100000000000000000]; // stack-static  heap-dynamic
	//
	//cout << array2[0] << endl;
	
	//int var;
	// var = 7;
	  // these are the same! below!!
	int *ptr = new int{ 7 };  // it's just getting memory actively! as a pointer
	int *ptr1 = new (std::nothrow) int{ 10 };
	//*ptr = 7;

	cout << ptr << endl;
	cout << *ptr << endl; 

	delete ptr;  // giving memory to the system   I'll give you before you ask!!
	ptr = nullptr; // avoding things
	cout << "After delete" << endl;
	//cout << ptr << endl;
	//cout << *ptr << endl;

	if (ptr != nullptr)
	{
		cout << ptr << endl;
	}


	// memory leak!!


	while (true)
	{
		int *ptr3 = new int;
		cout << ptr3 << endl;
		delete ptr3;
	}

	return 0;
}