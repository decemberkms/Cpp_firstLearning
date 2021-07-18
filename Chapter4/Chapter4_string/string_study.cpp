#include <iostream>
#include <string>

int main()
{
	using namespace std;

	const char my_strings [] = "Hello World!"; //array string
	const string myHello = "Hello World!"; // ()  {}
	 // string - user defined data type - class

	string my_ID = "123";  // 123 <- implicity conversion doesn't work

	cout << my_strings << endl;
	cout << myHello << endl;

	cout << "Your name? " << endl;
	std::string name;
	//cin >> name;
	std::getline(std::cin, name); // std::getline(std::cin, name) -> input is done when entering
	
	cout << "Your age? " << endl;
	std::string age;
	//cin >> age;
	std::getline(std::cin, age);

	cout << name << " " << age << endl;

	
	cout << "Your age? " << endl;
	int age2;
	cin >> age2;
	std::cin.ignore(32767, '/n');
	cout << age << endl;


	return 0;
}