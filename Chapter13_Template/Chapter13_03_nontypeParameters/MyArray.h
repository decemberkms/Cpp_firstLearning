#pragma once
#pragma once

#include <assert.h>
#include <iostream>

template<typename T, unsigned int T_SIZE>
class MyArray  //Tsize is determined at compile time already.
{
private:
	//int m_length;
	T *m_data;

public:
	MyArray()
	{
		//m_length = 0;
		m_data = new T[T_SIZE];
	}

	//MyArray(int length)
	//{
	//	m_data = new T[length];
	//	m_length = length;
	//}

	~MyArray()
	{
		delete[] m_data;
	}

	//void reset()
	//{
	//	
	//
	//}

	T& operator[] (int index)
	{
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}

	void print()
	{
		for (int i = 0; i < T_SIZE; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}

};

//template<typename T>  // cannot put in cpp file
//void MyArray<T>::print()
//{
//	for (int i = 0; i < m_length; ++i)
//		std::cout << m_data[i] << std::endl;
//	std::cout << std::endl;
//}

//
//void MyArray::print()
//{
//	for (int i = 0; i < m_length; ++i)
//		std::cout << m_data[i] << std::endl;
//	std::cout << std::endl;
//}