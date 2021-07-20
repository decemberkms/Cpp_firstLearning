#include <iostream>

using namespace std;

const char* getName()
{
	return "Minsung Kim";
}

int main()
{

	//char* name = "Minsung";  // this doesn't work because Minsung here doesnt have memory!
	// but with const you can do this!
	//const char *name = "Minsung";
	//const char *name2 = "Minsung";
	const char* name = getName();
	const char* name2 = getName();

	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;
	//cout << (uintptr_t)name2 << endl;

	return 0;
}