#include <iostream>

using namespace std;

int generateID()
{
	static  int s_id = 0; // constexpr compile time

	return ++s_id;
}


class Something
{
public:
	static int s_value;   // static member variable cannot be initialised
	//static const int s_value = 1;   // static member variable cannot be initialised


};

int Something::s_value = 1; // define in cpp not header



int main()
{

	cout << generateID() << endl;
	cout << generateID() << endl;
	cout << generateID() << endl;
	cout << generateID() << endl;

	cout << &Something::s_value << " " << Something::s_value << endl;

	Something sth1, sth2;

	sth1.s_value = 2;



	cout << &sth1.s_value << " " << sth1.s_value << endl;
	cout << &sth2.s_value << " " << sth2.s_value << endl;

	Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;
	return 0;
}