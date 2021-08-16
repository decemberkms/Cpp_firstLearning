#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	char buf[10];

	cin >> setw(5) >> buf;  // get only length of 5 - > set(5)

	cout << buf << endl;
	cin >> setw(5) >> buf;
	cout << buf << endl;
	return 0;
}