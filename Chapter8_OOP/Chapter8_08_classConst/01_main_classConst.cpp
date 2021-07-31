#include <iostream>

using namespace std;

class Something
{
public:
	int m_value = 0;
	
	Something(const Something& st_in)  // copy constructor - default value
	{
		cout << "Constructor" << endl;
	}


	Something()
	{
		cout << "Constructor" << endl;
	}
	
	void setValue(int value) 
	{
		m_value = value; 
	}
	
	int getValue() const
	{ 
		return m_value; 
	}
};

void print(const Something &st)
{

	cout << &st << endl;
	cout << st.m_value << endl;
}


int main()
{
	Something sth; // if class is aa const then only const member function can be used
	//sth.set
	
	cout << &sth << endl;
	cout << sth.getValue() << endl;
	

	print(sth);
	 // const can be sued for overloading for function

	return 0;
}