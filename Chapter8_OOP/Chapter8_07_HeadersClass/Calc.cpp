#include "01_main_HeadersClass.h"
using namespace std;

Calc::Calc(int init_value)
	: m_value(init_value)
{}

Calc& Calc::add(int value)
{
	m_value += value;
	return *this;
}

Calc& Calc::sub(int value)
{
	m_value -= value;
	return *this;
}

Calc& Calc::mult(int value)
{
	m_value *= value;
	return *this;
}

Calc& Calc::div(int value)
{
	m_value /= value;
	return *this;
}

void Calc::print()
{
	// not recommended to use namespace in header files
	cout << m_value << endl;
}
