#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string my_str("abcdefg");

	cout << my_str[0] << endl;
	my_str[0] = 'A';
	cout << my_str[0] << endl;

	try
	{
		//my_str[100] = 'X';
		my_str.at(100) = 'X'; // at gives throw!
	}
	catch (std::exception& e)
	{
		my_str.at(1) = 'X'; 
		cout << e.what() << endl;
	}

	cout << my_str << endl;

	cout << my_str.c_str() << endl;
	cout << my_str.c_str() << endl;
	// c_str() == data() < change it into C style (null at the end) \n

	string str1, str2;
	str1 = "aa";
	str2 = "bb";
	std::swap(str1, str2);
	str1.swap(str2);

	str1.append("aadasd").append("asfasf");
	str1.push_back('d');
	str1.insert(2, "bbbb");

	return 0;
}