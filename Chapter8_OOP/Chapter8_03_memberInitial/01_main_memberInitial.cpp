#include <iostream>

using namespace std;


//member initialiser list

class B
{
private:
	int m_b;

public:
	B(const int& m_b_in)
		:m_b(m_b_in)
	{}

};

class Something
{
private:
	int		m_i =100;
	double	m_d = 100;
	char	m_c = 100;             // here init and constuctor  - constuctor is first
	int		m_arr[5]; //from C++11
	B		m_b = 100;
public:
	Something()
		: m_i(1), m_d(3.14), m_c('a'), m_arr{1,2,3,4,5}, m_b(m_i -1)
		//: m_i {1}, m_d{3.14}, m_c{'a'}
	{
	/*	m_i = 1;
		m_d = 3.14;
		m_c = 'a'; */
	}
	
	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
		for (auto& ele : m_arr)
		{
			cout << ele << " ";
		}
	}

};


int main()
{
	Something som;

	som.print();


	return 0;
}