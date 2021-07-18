#include <iostream>
#include "MYCONSTANTS.h"

using namespace std;

//void printNumber(const int& my_number)   normal way in open source
//{
//	cout << my_number << endl;
//}

int main()
{
	

	//double const gravitry{ 9.8 };  mostly the same  

	const double gravitry{ 9.8 };// initialization is a must

	//gravity = 1.2;

	constexpr int my_const(123); // compiler time const

	int number;
	cin >> number;

	const int special_number(number); // runtime const

	int num_item = 123;
	const int price_per_item = 30;
	int price = num_item * price_per_item;  // no macro!! #define PRICE_PER_ITEM 30   hard debugging

	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;
	cout << circumference << endl;

	return 0;
}