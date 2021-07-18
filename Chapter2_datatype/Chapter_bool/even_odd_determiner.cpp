#include <iostream>

bool is_Even(int num)
{
	if ((num % 2) == 0) {
		return 1;
	} 
	else
	{
		return 0;
	}
}

int main()
{
	using namespace std;

	int my_number;
	while (1)
	{
		
	cout << "What is your input? " << endl;
	cin >> my_number;
		
	if (my_number == 0) 
		{
		break;
		}

		if (is_Even(my_number))
		{
			cout << my_number << " is even" << endl;
		}
		else
		{
			cout << my_number << " is not even" << endl;
		}
		cout << endl;
	}
	return 0;
}