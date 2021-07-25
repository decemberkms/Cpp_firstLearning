//call by reference
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

//void addOne(int &y) // x itself passed 
//{
//
//	cout << y << "  " << &y << endl;
//	y = y + 1;
//
//	cout << y << "  " << &y << endl;
//}


void getSinCos(const double &degrees, double &sin_out, double &cos_out) //input -with const? // output -- with &
{
	static const double pi = 3.141592 / 180.0;
	double radians = degrees * pi ;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);

}

//void foo(const int& x) // with const you can put literal with &
//{
//	cout << x << endl;
//}

typedef int* pint; // pinter is also a varible

void foo(int* &ptr) // with const you can put literal with &     star ampersand
{
	cout << ptr << " " << &ptr << endl;
}


//void printElement(int (&arr)[4]) // this is not normal. usually dynamic array is used -- 
void printElement(const vector<int>& arr)
{
	for (auto num : arr)
	{
		cout << num << " ";
	}
}


int main()
{

	//int x = 5;
	//cout << x << "  " << &x << endl;

	////addOne(x);

	//cout << x << "  " << &x << endl;


	//double sin(0.0);
	//double cos(0.0);
	//getSinCos(45, sin, cos);
	//cout << sin << " " << cos << endl;


	//foo(6);



	//int x = 5;
	//int* ptr = &x;

	//cout << ptr << " " << &ptr << endl;
	//foo(ptr);


	//int arr[]{ 1,2,3,4,5 };
	vector<int> arr{ 1,2,3,4 };
	printElement(arr);

 	return 0;
}
