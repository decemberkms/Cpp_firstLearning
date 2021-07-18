#include <iostream>

using namespace std;

void doSomething(int students_scores[])  // the argument is pointer not array
{
	cout << "In the function: " <<  (int)&students_scores << endl; // this is diffenrent because it's pointer  of the array
	cout << (int)&students_scores[1] << endl;
	cout << (int)&students_scores[2] << endl;
}


int main()
{
	int student_scores[5];

	doSomething(student_scores);  // (int)student_scores = (int)&student_scores // array is a address itself

	cout << endl;
	cout << "Actual: " << (int)&student_scores << endl; 
	cout << "Actual: " << (int)student_scores << endl; // because if efficient


	for (int i = 0; i < 5; ++i)
	{
		cout << (int)&student_scores[i] << endl;
	}

	return 0;
}