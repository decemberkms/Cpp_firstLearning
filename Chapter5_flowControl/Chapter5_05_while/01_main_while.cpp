#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "While loop test" << endl;
	
	//int count = 0;

	//while (count < 10)
	//{
	//	//static int count = 0; 
	//	cout << count << endl;
	//	++count;

	//	//if (count >= 10) break; // if you want to use condition putting true in while
	//}


	// overflow problem!!!!!!!!!

	/*unsigned int count = 10;   // unsigned can be faster but can be dangerous if you use it decreasing
	while (count >= 0)
	{
		if (count == 0) cout << "zero";
		else cout << count << " ";

		count--;

	}*/


	// example of every fie times
	/*int count = 1;

	while (count < 100)
	{
		if (count % 5 == 0) cout << "Hello " << count << endl;
		count++;
	}*/


	int outer_count = 1;
	while (outer_count <= 10)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			//cout << inner_count++ << " ";
			cout << inner_count << " ";
			inner_count++;
		}

		cout << endl;
		outer_count++;
		//++outer_count;
	}

	cout << endl;


	// excercise1

	/*int first_count = 10;
	
	while (first_count >= 0)
	{
		int second_count =  1;
		
		while (first_count >= second_count)
		{
			cout << second_count << " ";
			second_count++;
		}
		cout << endl;
		first_count--;
	}*/

	cout << endl;

	// excercise 2

	int first_count = 10;
	
	while (first_count > 0)
	{

		int second_count = 10;
		while (first_count <= second_count)
		{
			cout << second_count << "*";
			second_count--;
		}

		//cout << first_count;
		cout << endl;
		first_count--;
	}

	return 0;
}