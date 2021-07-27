#include <iostream>
#include <string>
#include <cassert>
#include <array>


using namespace std;

void printValue(const std::array<int, 5>& arra, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= arra.size() - 1);

	cout << arra[ix] << endl;
}

int main()
{
	int number = 3;
	// ...
	
	// number should be 5
	assert(number == 3); // only for debugg   release -> not executed

	std::array<int, 5> my_arr{ 1, 2, 3, 4, 5 };


	printValue(my_arr, 3);

	// assert -> runtime check -> check something is true!


	//static assert

	const int x = 5;
	
	static_assert(x == 5, "x should be 5");


	return 0;
}