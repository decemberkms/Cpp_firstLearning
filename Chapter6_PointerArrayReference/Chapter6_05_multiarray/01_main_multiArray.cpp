#include <iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_columns = 5; 

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
		{
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
			
		}
		cout << endl;
	}

	cout << endl;

	//int mArray[num_rows][num_columns] =              //row-major  //array[0][0] = 1; also possible
	//int mArray[num_rows][num_columns]           // copy initialisation works too? uniform?
	//{
	//	{1,2,3,4,5}, //row0
	//	{6,7,8,9,10},  //row1
	//	{11,12,13,14,15} //row2

	//};

	int mArray[5][5][5];

	int mArray[num_rows][num_columns] = { 0 };
	 
	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
		{
			//cout << mArray[row][col] << '\t';
			cout << (int)mArray[row][col] << '\t';   // one dimension in fact

		}
		cout << endl;
	}
	
	

	return 0;
}