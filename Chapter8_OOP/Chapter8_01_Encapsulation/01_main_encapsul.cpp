#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
private: //access specifier     private -> access function is needed!   default private
	int m_day; 
	int m_month;
	int m_year;


public:  // the same member can access their members even private       access function
	void setDate(const int& day_input, const int& month_input, const int& year_input)
	{
		m_day = day_input;
		m_month = month_input;
		m_year = year_input;
	}

	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}

	int getDay() { return m_day; }
	//const int& getDay() { return m_day; }   reference  return with const



	void copyFrom(const Date& original)
	{
		m_day = original.m_day;
		m_month = original.m_month;
		m_year = original.m_year;
	}

};


int main()
{
	Date today; //{ 5, 10, 2021 };

	today.setDate(5, 10, 2021);

	cout << today.getDay() << endl;

	Date copy;
	copy.copyFrom(today);
	cout << copy.getDay() << endl;

	return 0;
}