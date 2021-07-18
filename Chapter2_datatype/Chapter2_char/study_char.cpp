#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);  
	char c2('A'); 

	cout << c1 << "" << c2 << "" << int(c1) << "" << int(c2) << endl;


	//casting type  
	// c-style
	cout << (char)65 << endl;
	cout << (int)'A' << endl;
	// c++-style
	cout << char(65) << endl;
	cout << int('A') << endl;  // assert! 

	cout << endl;
	cout << static_cast<char>(65) << endl;
	cout << static_cast<char>('A') << endl;  // adking compiler first

	cout << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;


	cout << endl;

	//char c3(65);

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;
	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl; // buffer
	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl; // buffer
	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl; // buffer

	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;
	cout << int('\n') << endl;
	return 0;
}