#include <iostream>

using namespace std;

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		: m_value(init_value)
	{}

	Calc& add(int value)	{ m_value += value; return *this; }  // self dereference
	Calc& sub(int value)	{ m_value -= value; return *this; }
	Calc& mult(int value)   { m_value *= value; return *this; }
	Calc& div(int value)	{ m_value /= value; return *this; }

	void print()
	{
		cout << m_value << endl;
	}
};



class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		this->setID(id);  //  this-> : default value member selection operator for class or structure
		//(*this).setID(id)  << the same   this -< point address's of itself
		// this -> m_id; << python's self!
		cout << this << endl;
	}

	void setID(int id) { m_id = id; }
	int getID() { return m_id; }

	
	/*void printAdd()
	{
		cout << &this << endl;
	}*/

	void printID()
	{
		cout << getID() << endl;
	}
};

int main()
{
	Simple s1(1), s2(2);
	s1.setID(2);
	s2.setID(4);

	s1.printID();
	s2.printID();

	cout << &s1 << " " <<  &s2 << endl;

	//Simple::setID(&s1, 1); <- theoretically this is the form but cannot be used in this way == s2.setID(4)



	Calc cal(10), cal2(20);
	cal.add(10);
	cal.sub(1);
	cal.mult(10);
	cal.print();


	// chaining member function
	cal2.add(10).sub(3).mult(100).print();
	
	// 
	/*Calc& temp1 = cal2.add(10);   
	Calc& temp2 = temp1.sub(1);*/

	return 0;
}