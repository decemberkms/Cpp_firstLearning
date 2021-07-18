#include <iostream>

int add(int x, int y)
{
	return x + y;
}

//auto add1(int x, int y) -> int;  trailing return  -> return is int. nothing
//{
//	return x + y;
//}

//template -> for arguments  auto cannot be used for arguments



int main()
{
	using namespace std;

	auto a(123);
	auto b(1.34);
	auto c = 1 + 2.0;
	auto result = add(1, 2);

	return 0;
}