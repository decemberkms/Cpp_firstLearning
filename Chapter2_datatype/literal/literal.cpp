#include <iostream>

int main()
{
	using namespace std;

	float pi = 3.14f;
	//int i = -1234u; // unsigned
	//unsigned int n = 5u;
	//long n2 = 5L;
	//double d = 6.0e-10;

	// Decimal 1~10
	//Octal 1~7  10,11~
	// Hexa : 0~9 ABCDEF - 16  -- 10

	// 0011 1010 1111 1111  == 3A7F
	// 3A7F
	int x = 012; // Octal
	cout << x << endl;

	int y = 0xF;
	cout << y << endl;

	int z = 0b1010; // ' can be ignored - from c++ 14
	cout << z << endl;

	const int price_per_item = 10;

	int num_items = 123;
	int price = num_items * 10 // 10 is...  magin number
	



	return 0;
}