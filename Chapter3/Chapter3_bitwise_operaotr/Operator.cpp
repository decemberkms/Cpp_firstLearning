#include <iostream>
#include <bitset>

int main()
{
	using namespace std;
	// memory's fundamental unit -> byte, so bitwise operator is used for performance.
	// << left shift
	// >> right shift
	// ~ not
	// & and
	// | or
	// ^ Xor

	unsigned int a = 1024;
	unsigned int bit1 = 2;
	cout << std::bitset<4>(bit1) << endl;
	cout << std::bitset<16>(a) << endl;

	//unsigned int b = a << 2;  // shift 2 -> x 3 x2  x  6 12 24  -- shift << is x2
	 // right shift -- divide by 2

	cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
	cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
	cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
	cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl; /// very much faster!!

	cout << std::bitset<16>(~a) << " " << (~a) << endl;
	
	unsigned int b = 0b1100;
	unsigned int c = 0b0110;
	cout << b << " " << c << " " <<  endl;
	cout << std::bitset<4>(b & c) << " " << endl;
	cout << std::bitset<4>(b | c) << " " << endl;
	cout << std::bitset<4>(b ^ c) << " " << endl;

	// a &=b ;  // possible!!

	cout << std::bitset<4>(5 & 12) << " " << endl;


	return 0;
}