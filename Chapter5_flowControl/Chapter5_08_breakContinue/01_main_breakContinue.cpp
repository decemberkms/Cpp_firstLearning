#include <iostream>

using namespace std;


void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
			break; // with Hello

		if (ch == 'r')
			return;  /// without Hello
	}

	cout << "Hello " << endl;
}

int main()
{

	/*int count = 0;
	while (true)
	{
		cout << count << endl;
		if (count == 10) break;
		count++;

	}*/


	//breakOrReturn();

	for(int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0) continue; // back to for loop beginning  if true then cout is not executed
			cout << i << " Executed" << endl;
	}


	int count(0);

	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'x')
			break;

		cout << ch << " " << count++ << endl;
	}


	return 0;
}