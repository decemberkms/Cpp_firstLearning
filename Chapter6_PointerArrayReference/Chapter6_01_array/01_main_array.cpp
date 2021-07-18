#include <iostream>
#include <bitset>
#include <typeinfo>

using namespace std;

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	AJCK,
	MAI,
	ASDF,
};


int main()
{
	//int my_array[] = { 1, 2, 3 , 5 };

	//cout << std::bitset<16>(10) << endl;

	int one_student_score;
	int student_scores[5];

	//cout << sizeof(one_student_score) << endl;
	//cout << sizeof(student_scores) << endl;  // normally the memery is all in the line but if it's too big, it's bigger than number*size of the type
	
	one_student_score = 100;

	student_scores[0] = 100; 
	student_scores[1] = 90;
	student_scores[2] = 70;
	student_scores[3] = 80;
	student_scores[4] = 99;
	//student_scores[5] = 99; // runtime erro!!!!!!!!!
	//student_scores[0] = static_cast<double>(student_scores[0]); // not possible

	cout << typeid(student_scores[0]).name() << endl;



	cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;

	cout << endl;

	//int myArray1[5] = { 1,2,3,4,5 };
	int myArray1[] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; ++i)
	{
		cout << myArray1[i] << endl;
	}

	const int num_students = 5;
	//cin >> num_students;

	int students_scores2[num_students]; // lenght or size -> array's determined in compile time not runtime
	// so in C, maro is defined.  -> #define NUM_STUDENTS 10000000  but in C++ use dynamic allocation.



	return 0;
}