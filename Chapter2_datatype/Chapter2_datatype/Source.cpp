#include <iostream>

using namespace std;

int main()
{
	bool bValue = true;

	cout << (bValue ? 1 : 0) << endl;
	cout << bValue << endl;

	char chValue = 'A';

	cout << chValue << endl;
	cout << (int)chValue << endl;
	
	float fValue = 3.141592f;  // not as accuate as double
	double dValue = 3.141592;  // double <- double as float

	cout << fValue << endl;
	cout << dValue << endl;

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;
	cout << aValue << endl;
	cout << aValue2 << endl;

	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;
	cout << sizeof(bool) << endl;
	cout << sizeof(char) << endl;

	unsigned char x, y;


	x = 2;
	y = 1;
	cout << x + y << endl;
	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
	cout << "Data type size list" << endl;
	cout << endl;
	cout << "Character" << endl;
	cout << "char: " << sizeof(char) << " byte(s)" << endl;
	cout << "char16_t: " << sizeof(char16_t) << " byte(s)" << endl;
	cout << "char32_t: " << sizeof(char32_t) << " byte(s)" << endl;
	cout << "wchar_t: " << sizeof(wchar_t) << " byte(s)" << endl;
	cout << endl;
	cout << "signed Integer" << endl;
	cout << "signed char: " << sizeof(signed char) << " byte(s)" << endl;
	cout << "signed short int (short): " << sizeof(short) << " byte(s)" << endl;
	cout << "signed int (int): " << sizeof(int) << " byte(s)" << endl;
	cout << "signed long int (long): " << sizeof(long) << " byte(s)" << endl;
	cout << "signed long long int (long long): " << sizeof(long long) << " byte(s)" << endl;
	cout << endl;
	cout << "unsigned Integer" << endl;
	cout << "unsigned char: " << sizeof(unsigned char) << " byte(s)" << endl;
	cout << "unsigned short int (short): " << sizeof(unsigned short) << " byte(s)" << endl;
	cout << "unsigned int (int): " << sizeof(unsigned) << " byte(s)" << endl;
	cout << "unsigned long int (long): " << sizeof(unsigned long) << " byte(s)" << endl;
	cout << "unsigned long long int (long long): " << sizeof(unsigned long long) << " byte(s)" << endl;
	cout << endl;
	cout << "the others" << endl;
	cout << "float: " << sizeof(float) << " byte(s)" << endl;
	cout << "double: " << sizeof(double) << " byte(s)" << endl;
	cout << "long double: " << sizeof(long double) << " byte(s)" << endl;
	cout << "bool: " << sizeof(bool) << " byte(s)" << endl;
	//cout << "void: " << sizeof(void()) << " byte(s)" << endl;
	cout << "decltype: " << sizeof(decltype(nullptr)) << " byte(s)" << endl;




	int c = 123; // copy initialization  // loss of data
	int a(123); // direct initialization  /// loss of data 
	int b{ 123 }; //uniform initialization    ///  very stubborn  error
	

	int k, l, m;


	return 0;
}