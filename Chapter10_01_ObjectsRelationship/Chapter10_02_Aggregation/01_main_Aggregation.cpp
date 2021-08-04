#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

int main()
{
	using namespace std;

	Student std1("Min", 1);
	Student std2("Maaax", 1);
	Student std3("Fieeel", 1);

	Teacher teacher1("Prof. Hong");
	Teacher teacher2("Prof. Good");


	Lecture lec1("Introduction to Computer Programming");
	lec1.assignedTeacher(&teacher1);
	lec1.registerStudent(&std1);
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);


	Lecture lec2("Computational thinking");
	lec2.assignedTeacher(&teacher2);
	lec2.registerStudent(&std1);
	lec2.registerStudent(&std2);
	lec2.registerStudent(&std3);

	//test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;

	}

	return 0;

}