#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numberator;
	int m_denominator;

public:
	Fraction(const int& num_input= 0, const int& den_input = 1)  //constructor
	{
		m_numberator = num_input;
		m_denominator = den_input;
		
	}



	void print()
	{
		cout << m_numberator << " / " << m_denominator << endl;
	}
};

int main()
{
	//Fraction frac;  // no constuctor form

	//frac.print();

	Fraction one_third(10, 10);
	one_third.print();

	return 0;
}