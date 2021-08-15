#include <iostream>
#include "Resource.h"
// std::auto_ptr<int> <- not use anymore
using namespace std;

// RAII
void doSomething()
{
	try
	{
		Resource* res = new Resource;

		if (false);
		{
			throw - 1;
		}

	delete res; // must!! for dynaic allocation
	}
	catch (...)
	{

	}

	return;
}

int main()
{

	doSomething();


}