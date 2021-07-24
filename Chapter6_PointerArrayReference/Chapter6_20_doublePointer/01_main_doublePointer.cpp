#include <iostream>

using namespace std;

int main()
{
	//int* ptr = nullptr;
	//int** ptrptr = nullptr; //pointer's pointer

	//int value = 5;
	//ptr = &value;
	//ptrptr = &ptr;

	//cout << "ptr: " << ptr << ", ptr dereference: " << *ptr << ", ptr itself address " << &ptr << endl;
	//cout << "ptrptr: " << ptrptr << ", ptrptr dereference: " << *ptrptr << ", ptrptr itself address " << &ptrptr << endl;
	//cout << "double de reference: " << **ptrptr << endl;

	// multiple pointer is not so common but double is used quite often.
	// double ponter is used for matrix


	//static alloccation array
	const int row = 3;
	const int col = 5;

	const int s2da[row][col] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	}; 
	
	 
	// dynamic way
	//const int row = 3;
	//const int col = 5;
	//int* r1 = new int[col] {1, 2, 3, 4, 5};
	//int* r2 = new int[col] {6, 7, 8, 9, 10};
	//int* r3 = new int[col] {11, 12, 13, 14, 15};

	//int** rows = new int* [row] {r1, r2, r3};

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			cout << s2da[r][c] << " ";
		cout << endl;
	}

	//delete[] r1;
	//delete[] r2;
	//delete[] r3;
	//delete[] rows;


	// for loop used

	//const int row = 3;
	//const int col = 5;
	

	int** matrix = new int* [row];

	for (int r =0; r < row; ++r)
		matrix[r]= new int[col];


	for (int r = 0; r < row; ++r)
		for (int c = 0; c < col; ++c)
			matrix[r][c] = s2da[r][c];


	for (int r = 0; r < row; ++r)
		{
			for (int c = 0; c < col; ++c)
			cout << matrix[r][c] << " ";
		cout << endl;
		}

	for (int r = 0; r << row ; ++r)
	{
		delete[] matrix[r];
	}

	delete[] matrix;
 
	//delete[] r1;
	//delete[] r2;
	//delete[] r3;
	//delete[] rows;




	
	return 0;
}