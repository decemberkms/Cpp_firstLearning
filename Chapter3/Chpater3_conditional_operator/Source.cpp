#include <iostream>

using namespace std;

int main()
{
	//float a;
	//cout << sizeof(float) << endl;   // 4byte -> 32 bits
	//cout << sizeof a << endl;   // sizeof() is a operator

	//comma operator

	int x = 3;
	int y = 10;
	int z = (++x, ++y); // x increment, y increment then put y into z
	//++x;
	//++y;
	//int z = ; 
	//cout << x << " " << y << " " << z << endl;

	//conditonal oprator  ternary operator arithmetic if
	bool onSale = true;

	const int price = (onSale == true) ? 10 : 100;  // ternary opertor


	/*int price;
	if (onSale)
		price = 10;
	else
		price = 100;
	cout << price << endl;*/
	cout << price << endl;

	int tt = 5;
	cout << ((tt % 2 == 0) ? 0 : 1) << endl;


	return 0;
}