#include "Student.h"
#include "Teacher.h"

int main()
{
	Student std("Min Sung");
	std.setName("Minssung true");
	std::cout << std.getName() << std::endl;

	Teacher tch("Teacher1");
	tch.setName("Teacher1 true");

	std::cout << tch.getName() << std::endl;

	std::cout << std << std::endl;
	std::cout << tch << std::endl;

	std.doNothing();

	std.study();
	tch.teach();

	Person person;

	person.setName("Man1");
	person.getName();
	

	return 0;
}