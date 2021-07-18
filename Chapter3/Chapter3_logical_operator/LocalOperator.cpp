#include <iostream>

using namespace std;

int main()
{
	//logical NOT !x 

	bool x = true;
	
	cout << !x << endl;

	//logical AND

	bool y = false;

	cout << (x && y) << endl; //*

	//example
	//bool hit = true;
	//int health = 10;
	//if (hit == true && health < 20)
	//{
	//	cout << "die" << endl;
	//} 

	//logical OR ||
	
	//cout << (x || y) << endl; // +


	//int k = 5;
	//int z = 7;
	//if (k != z)
	//{
	//	cout << " k is not equal to z" << endl;
	//}

	int v = 1;
	if (v == 0 || v == 1)
	{
		cout << "v is 0 or1 " << endl;
	}



	// shor circuit evaluation

	int s = 2;
	int t = 2;

	if ((s == 1) && (t++ == 2))  // increment is in if statement    only check one side - short circuit evaluation
	{
		//do something
	}

	cout << t << endl;


	//De Morgan's law
	bool j = true;
	bool l = false;
	//!(x&&y) = !x || !y

	//XOR   - not exist
	//false  false false
	//false true   true
	//true false  true
	// true true  false





	return 0;
}