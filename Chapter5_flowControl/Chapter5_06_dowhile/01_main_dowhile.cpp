#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//int selection;  // must be here!!   // doesnt work!
	//cin >> selection;
	//while (selection <= 0 || selection >= 5)
	//{
	//	cout << "1. add" << endl;
	//	cout << "2. sub" << endl;
	//	cout << "3. mult" << endl;
	//	cout << "4. div" << endl;
	//	
	//}
	//cout << "You selected " << selection << endl;

	int selection;  // must be here!!   // doesnt work!
	do
	{
		cout << "1. add" << endl;
		cout << "2. sub" << endl;
		cout << "3. mult" << endl;
		cout << "4. div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "You selected " << selection << endl;

	return 0;
}