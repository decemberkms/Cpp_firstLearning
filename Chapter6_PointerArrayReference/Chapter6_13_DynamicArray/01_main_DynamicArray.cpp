#include <iostream>

using namespace std;


int main()
{
	//const int length = 5;   static array!   // dynamic allocation! get memory as a pointer first! 
	//int array[length];

	//int length;
	// 
	//cout << "Put length!";
	//cin >> length;

	//cout << endl;
	//int* array = new int[length] {5,6,7,8,9};

	//array[0] = 1;
	//array[1] = 2;

	//for (int i = 0; i < length; ++i)
	//{
	//	cout << (uintptr_t)&array[i] << endl;
	//	cout << array[i] << endl;
	//}

	//delete [] array;

	int fixedArray[] = { 1,2,3,4,5 };

	int *array1 = new int[3]{ 1,2,3 };  // 3 should be there



	delete [] array1;



	return 0;
}
