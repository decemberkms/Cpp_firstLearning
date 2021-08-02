#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() const
	{
		return m_cents;
	}

	int& getCents()
	{
		return m_cents;
	}

	operator int()
	{
		cout << "Cast here" << endl;
		return m_cents;
	}

};

void printInt(const int& value)
{
	cout << value << endl;
}


int main()
{
	Cents cents1(7), cents2(0);

	
	printInt(cents1);


	return 0;
}

