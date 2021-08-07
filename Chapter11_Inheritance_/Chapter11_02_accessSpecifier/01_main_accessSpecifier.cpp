#include <iostream>

class Base
{
public:
	int m_public;
private:
	int m_private;
protected:
	int m_protected;
};

class Derived : public Base
{
public:
	Derived()
	{
		m_protected = 123;
	}
};

int main()
{
	Base base;

	base.m_public = 123;
	
	Derived de;

	de.

	return 0;
}