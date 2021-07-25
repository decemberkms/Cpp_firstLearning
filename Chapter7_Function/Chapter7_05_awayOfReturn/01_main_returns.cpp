#include <iostream>
#include <array>
##include <tuple>

using namespace std;

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;

	return std::make_tuple(a, d);
}

//int getValue(int x)
//{
//	int value = x * 2;
//	return value;
//}

//int* getValue(int x)
//{
//	int value = x * 2;
//	return &value;
//}

//int& getValue(int x)
//{
//	int value = x * 2;
//	return value;
//}

//int* allocateMemery(int size)  // new int function
//{
//	return new int[size];
//}

//int& get(std::array<int, 100>& my_arr, int ix)
//{
//	return my_arr[ix];
//}

//struct S
//{
//	int a, b, c, d;
//};
//
//S getStrct()
//{
//	S my_s{ 1,2,3,4 };
//}




int main()
{
	//int value = getValue(3);
	//
	//cout << *value << endl;

	//int* array = new int[10]; // new int is made as a function later
	// int* array = allocateMemery[1024]

	//delete[] array;

	//int value = getValue(5);

	//cout << value << endl;
	//cout << value << endl;

	//std::array<int, 100> my_arr;
	//my_arr[30] = 10;
	//
	//get(my_arr, 30) = 1024;
	//cout << my_arr[30] << endl;

	//S my_s = getStrct();
	//my_s.b;
	//my_s.a;

	std::tuple<int, double> my_tp = getTuple();
	std::get<0>(my_tp);
	std::get<1>(my_tp);

	return 0;
}