#include <iostream>
using namespace std;
void my_function(void)
{

}

int main()
{
	

	//void my_void;    void cannot be declared since it does not have memory!

	int i = 123;
	float f = 123.456f;

	void* my_void;

	my_void = (void*)&i;
	my_void = (void*)&f;  // address's size is always the same regardless of datatype and datasize
	// casting !! (void)
	cout << my_void << endl;
	return 0;
}