#include <iostream>
#include "Header.h"


template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

//int getMax(int &x, int &y)
//{
//	return (x > y) ? x : y;
//}
//
//double getMax(double &x, double &y)
//{
//	return (x > y) ? x : y;
//}
//
//char getMax(char &x, char &y)
//{
//	return (x > y) ? x : y;
//}


int main()
{
	std::cout << getMax(1, 2) << std::endl;
	std::cout << getMax(1.0f, 2.0f) << std::endl;
	std::cout << getMax('a', 'c') << std::endl;
	std::cout << getMax(Cents(10), Cents(9)) << std::endl;

	return 0;
}