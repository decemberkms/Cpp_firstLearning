#include <iostream>
#include <string>
#include <vector>
#include <sstream>



// anythin to string
template <typename T>
std::string ToString(T x)
{
	std::ostringstream osstream;
	ssstream << x;
	return osstream.str();
}


template <typename T>
bool FromString(const std::string& str, T& x)
{
	std::istringstream isstream(std);
	return (isstream >> x) ? true : false;
}



int main()
{
	//std::string my_string("My string");

	const char* my_string = "my string";
	std::string second_string(my_string, 3,5);
	std::string third_string(10,'A');


	std::cout << my_string << std::endl;
	std::cout << second_string << std::endl;
	std::cout << third_string << std::endl;


	std::vector<char> vec;
	for (auto e : "Today is a good day")
		vec.push_back(e);

	std::string fourth_string(vec.begin(), std::find(vec.begin(), vec.end(), ' '));

	std::cout << fourth_string << std::endl;


	std::string fifth_string(std::to_string(1004));

	std::cout << fifth_string << std::endl;
	
	int i = std::stoi(fifth_string);
	float f = std::stof(fifth_string);


	double d;
	if (FromString(fifth_string, d))
		std::cout << d << std::endl;	


	return 0;
}
