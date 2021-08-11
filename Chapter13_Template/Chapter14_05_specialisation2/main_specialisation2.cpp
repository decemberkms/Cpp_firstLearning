#include <iostream>
#include <array>

using namespace std;

template<typename T>
class A
{
public:
	A(const T&input)
	{}

	void something()
	{
		cout << typeid(T).name() << endl;
	}

	void test()
	{}
};

template<> //almost new class!
class A<char>
{
public:
	void something()
	{
		cout << "Char type specialisation" << endl;
	}

};


int main()
{
	A<int>		a_int(1);    // c++17, you can omit <int>
	A<double>	a_double(1.4);
	A<char>		a_char;

	a_int.something();
	a_double.something();
	a_char.something();
	
	//a_char.test()!!  it's not inheritance!!


}