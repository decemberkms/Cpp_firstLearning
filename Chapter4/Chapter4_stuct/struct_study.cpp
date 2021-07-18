#include <iostream>
#include <string>

using namespace std;

struct Person
{
	double height; // member    double height = 100; < default value
	float  weight;
	int    age;
	string name;

	void print()
	{
		cout << height << " " << height << " " << age << " " << name << endl;
	}
};

//void printPerson(Person per)
//{
//	cout << per.height << " " << per.height << per.age << " " << per.name << endl;
//}

struct Family
{
	Person me, mom, dad;
};

int main()
{
	Person me{2.0, 100.0, 20, "Minsung"};
	/*me.age = 20;
	me.name = "Minsung Kim";
	me.height = 2.0;*/
	Person me2(me); // possible but not recommended

	
	//printPerson(me);

	me.print();

	return 0;
}