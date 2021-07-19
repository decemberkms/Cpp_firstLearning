#include <iostream>
#include <cstring>


using namespace std;

int main()
{

	//char myString[] = "string"; // null character at the end '\0'

	//for (int i = 0; i < 7; ++i)
	//{
	//	cout << (int)myString[i] << endl;
	//}

	//cout << sizeof(myString) / sizeof(char) << endl;

	char myString[255];

	//cin >> myString;
	//cin.getline(myString, 255);   // used instead of cin

	////cout << myString << endl;

	//int ix = 0;

	//while (true)
	//{
	//	if (myString[ix] == '\0') break;
	//	cout << myString[ix] << " " << (int)myString[ix] << endl;
	//	++ix;
	//}


	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest, 50, source);

	cout << source << endl;
	cout << dest << endl;

	//strcat()  concatnate
	//strcmp()   compare   - same 0 , different 1



	return 0;
}