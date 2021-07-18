#include <iostream>

using namespace std;


enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE,
};

void printColorName(Colors color)
{
	/*if (color == Colors::BLACK)
		cout << "Black" << endl;
	else if (color == Colors::WHITE)
		cout << "White" << endl;*/
	//...

	switch (color)
	{
		// you can declase  varible here but cannot assgin them 
	case Colors::BLACK:	  // it's not namespace so cannot use using space  and cannot put this in enum class!
		//int a; // even if you declare here this is regarded upthere!

		cout << "Black";
		break;
	case Colors::WHITE:
		cout << "White";
		break;
	case Colors::RED:
		cout << "Red";
		break;
	case Colors::GREEN:
		cout << "Green";
		break;
	case Colors::BLUE:
		cout << "Blue";
		break;

	default:
		cout << "Undefined input!";
		//break; // without this,  not a problem!
	}


	//switch (static_cast<int>(color))  // if you don't want to type everything!!!!!!!!
	//{
	//case 0:	  // it's not namespace so cannot use using space  and cannot put this in enum class!
	//	cout << "Black";
	//	break;
	//case 1:
	//	cout << "White";
	//	break;
	//case 2:
	//	cout << "Red";
	//	break;
	//case 3:
	//	cout << "Green";
	//	break;
	//case 4:
	//	cout << "Blue";
	//	break;
	//}
}

int main()
{

	//printColorName(Colors::BLACK);

	
	
	// fisrt example!!
	/*int x;
	cin >> x;

	switch (x)
	{
	case 0:
		cout << "Zero";
		break;
	case 1:
		cout << "One";
		break;
	case 2:
		cout << "Two";
		break;
	}
	cout << endl;*/
	
	
	return 0;
}
