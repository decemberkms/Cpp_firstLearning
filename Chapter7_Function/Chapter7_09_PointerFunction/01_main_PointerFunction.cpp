#include <iostream>
#include <array>
#include <functional>

using namespace std;

//int func()
//{
//	return 5;
//}
//
//int goo()
//{
//	return 10;
//}

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}


bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;
}

//void printNumbers(const array<int, 10> &my_array, bool print_even)
//{
//	for (auto element : my_array)
//	{
//		if (print_even && element % 2 == 0) cout << element << " ";
//		if (!print_even && element % 2 == 1) cout << element << " ";
//	}
//	cout << endl;
//}

void printNumbers(const array<int, 10>& my_array, 
	bool (*check_fcn)(const int&) = isEven)
{
	for (auto element : my_array)
	{
		if (check_fcn(element) == true) cout << element << " ";
		/*if (!print_even && element % 2 == 1) cout << element << " ";*/
	}
	cout << endl;
}


int main()
{
	//cout << func << endl;   /// Function is also a pointer!!!!!!!!!!!!

	//int(*fcnptr)() = func; // get address of the function
	//
	//cout << fcnptr() << endl; 

	//fcnptr = goo;

	//cout << fcnptr() << endl;

	std::array<int, 10> my_arr = { 0,1,2,3,4,5,6,7,8,9 };

	printNumbers(my_arr);
	printNumbers(my_arr, isOdd);


	// function pointer -> in order to put function into parameter

	return 0;
}