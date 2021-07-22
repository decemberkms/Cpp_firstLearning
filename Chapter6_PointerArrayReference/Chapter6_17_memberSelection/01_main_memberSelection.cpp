#include <iostream>

using namespace std;


struct Person
{
	int age;
	double weight;
};


int main()
{

	Person person1;

	person1.age = 10;
	person1.weight = 30;
		

	Person& ref = person1;

	ref.age = 15;

	Person* ptr = &person1;

	ptr->age =30;  // select a member using pointer
	(*ptr).age = 20;

	Person& ref2 = *ptr;
	ref2.age = 45;


	return 0;
}