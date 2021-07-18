#include <iostream>
#include <typeinfo>

enum Color // user defined data type
{
	COLOR_BLACK = -3,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_YELLOW,
	COLOR_GREY,
};

enum Feeling // user defined data type
{
	HAPPY,
	JOY,
	SAD,
	EXCITED
};


int main()
{
	using namespace std;
	
	Color paint = COLOR_GREEN;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };  // casting is possible but not can not put this into int. empty variable
	
	Feeling my = HAPPY;


	cout << house << " " << COLOR_BLUE << endl;

	if (paint == my)
	{
		cout << " !!! " << endl;
	}


	enum class Time_  /// scoped enumerator
	{
		MORNING,
		NOON,
		EVENING
	};

	Time_ mytime = Time_::MORNING;

	//cout << mytime << endl; -> cannot print as the class is user defined

	return 0;
}