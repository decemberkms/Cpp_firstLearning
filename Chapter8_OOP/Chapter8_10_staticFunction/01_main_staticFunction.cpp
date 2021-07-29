#include <iostream>

using namespace std;


class Something
{
private:
	static int s_value;    // static variable can be access from all the instance of this class

public:
	static int getValue()
	{
		return s_value; // static - 'this' cannot bbe used
	}

	int temp()
	{
		return this->s_value;
	}

};

int Something::s_value = 1024;

int main()
{
	cout << Something::getValue() << endl;

	return 0;
}