#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//int findFirstChar(const char* string, char ch)
//{
//	for (std::size_t index = 0; index < strlen(string); ++index)
//		if (string[index] == ch)
//			return index;
//
//	return -1;
//}
//
//double divide(int x, int y, bool& success)
//{
//	if (y == 0)
//	{
//		success = false;
//		return 0.0;
//	}
//
//	success = true;
//	return static_cast<double>(x) / y;
//
//}

int main()
{
	//bool success;
	//double result = divide(5, 3, success);

	//if (!success)
	//	std::cerr << "An error occured" << std::endl;
	//else
	//	std::cout << "Result is " << result << std::endl;

	//std::ifstream input_file("temp.txt");
	//	if (!input_file)
	//		std::cerr << "Cannot open file" << std::endl;
	//return 0;


	// exception handling can affect performance

	//try catch throw
	
	double x;
	cin >> x;

	try  // where a problem can happen
	{
		if (x < 0.0) throw std::string("Negative input");  // very stubborn!!!
		 // if x > 0.0 then it's passed

		cout << std::sqrt(x) << endl;
	}
	catch (std::string error_message)
	{
		// do something to respond
		cout << std::sqrt(x*x) << endl;
		cout << error_message << endl;
	}
	catch (...)
	{
		// do something to respond
		cout << std::sqrt(x * x) << endl;
		cout << endl;
	}
	return 0;
}