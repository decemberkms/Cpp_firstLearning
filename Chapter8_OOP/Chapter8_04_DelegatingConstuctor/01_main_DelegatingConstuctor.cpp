#include <iostream>

using namespace std;


class Student
{
private:
	int		m_id;
	string	m_name;

public:
	Student(const string& name_in)       
		//: m_id(0), m_name(name_in)
		: Student(0, name_in)		// delegating construcctor --- overloading?
	{}
	Student(const int& id_in, const string& name_in)
		: m_id(id_in), m_name(name_in)                 // initialisation delcare should be in one place for your  convinience
	{}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};



int main()
{
	Student st1(0, "Min Sung");
	st1.print();

	Student st2("Pee");
	st2.print();

	return 0;
}