#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << array[i] << " ";

	}

	cout << endl;
}



int main()
{
	//selection sorting
	              //value index
	// 3 5 2 1 4       1   3
	// 1 5 2 3 4       2   2  
	// 1 2 5 3 4       3   3
	// 1 2 3 5 4       4   4
	// 1 2 3 4 5       

	const int length = 5;

	int array[length] = { 3, 5, 2, 1, 4 };

	printArray(array, length);
	cout << endl;
	cout << endl;
	cout << endl;


	for (int i = 0; i < length - 1 ; ++i)
	{
		for (int j = i + 1; j < length; ++j)
		{
			if (array[i] > array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				printArray(array, length);
			}
		}
	}

	//for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	//{
	//	int smallestIndex = startIndex;

	//	for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
	//	{
	//		if (array[smallestIndex] > array[currentIndex])
	//			{
	//				smallestIndex = currentIndex;
	//			}
	//	}

	//	{
	//		int temp = array[smallestIndex];
	//		array[smallestIndex] = array[startIndex];
	//		array[startIndex] = temp;
	//		printArray(array, length);
	//	}

	//}




	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	printArray(array, length);


	// swap  std::swap()






	return 0;
}