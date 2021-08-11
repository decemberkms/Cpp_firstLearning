#include <iostream>

using namespace std;

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

template<>
char getMax(char x, char y) // specialization !
{
	cout << "Warning :comparing chars" << endl;
	return (x > y) ? x : y;
}


int main()
{

	//cout << getMax<int>(1, 2) << endl;
	cout << getMax(1, 2) << endl;
	cout << getMax('a', 'b') << endl;

	return 0;
}