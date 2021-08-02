#include <iostream>
#include <cassert>


using namespace std;

class IntList
{
private:
	int m_list[10] = { 1,2,3,4,5,6,7,8,9,10 };

public:

	const int& operator [] (const int index) const// index can be string ex) map             & always L value having addresssss
	{
		assert(index >= 0);
		assert(index < 10);
		
		return m_list[index];
	}

	int& operator [] (const int index)// index can be string ex) map             & always L value having addresssss
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}
	/*void setItem(int index, int value)
	{
		m_list[index] = value;
	}

	int getItem(int index)
	{
		return m_list[index];
	}*/
};

int main()
{
	const IntList my_list;
	//my_list[3] = 10;
	cout << my_list[3] << endl;

	return 0;
}