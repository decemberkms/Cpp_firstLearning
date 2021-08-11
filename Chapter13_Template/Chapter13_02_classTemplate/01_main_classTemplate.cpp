#include "MyArray.h" // copy this in here
//#include "MyArray.cpp" // possible but bad 

int main()
{
	MyArray<double> my_arr(10);

	for (int i = 0; i < my_arr.getLength(); ++i)
		my_arr[i] = i * 0.5;

	my_arr.print();

	return 0;

}