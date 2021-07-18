#include <iostream>

namespace a
{
	int my_var(10);
	int count(1234);
}

namespace b
{
	int my_var(20);
}

int main()
{
	 using namespace std;
	 //using std::cout;
	 
	 

	 {
		 //using namespace a;
		 cout << a::my_var << endl;
		 cout << a::count << endl;
	 }

	 using namespace b;
	 cout << b::my_var << endl;

	cout << "Hello " << endl;

	return 0;
}