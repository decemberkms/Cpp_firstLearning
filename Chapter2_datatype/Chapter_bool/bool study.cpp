//#include <iostream>
//
//bool isEqual(int a, int b)
//{
//	bool result = (a == b);
//
//	return result;
//}
//
//
//int main()
//{
//	using namespace std;
//
//	bool b1 = true; // copy initialization
//	bool b2(false); // direct initialization
//
//	bool b3{ true }; // uniform initialization
//
//	b3 = false;
//
//	cout << std::boolalpha; // for change printing value for boolean
//	cout << std::noboolalpha; // for change printing value for boolean
//	cout << !b3 << endl;  // ! not operator
//	cout << !b1 << endl;
//
//	cout << endl;
//
//	cout << (true && true) << endl;   // multiply
//	cout << (true && false) << endl;
//	cout << (false && true) << endl;
//	cout << (false && false) << endl;
//
//	cout << endl;
//
//	cout << (true || true) << endl;   // add
//	cout << (true || false) << endl;
//	cout << (false || true) << endl;
//	cout << (false || false) << endl;
//
//	cout << endl;
//
//	if (true)
//	{
//		cout << "This is true" << endl;
//	}
//	else
//	{
//		cout << "This is false" << endl;
//	}
//
//	cout << std::boolalpha;
//	cout << endl;
//	cout << isEqual(1, 1) << endl;
//	cout << isEqual(0, 3) << endl;
//
//	if (4) // 0 - flase - 1,2,3,4,5,.... ture
//	{
//		cout << "What is this?" << endl;
//	}
//
//	bool b;
//	cout << std::noboolalpha;
//	cout << endl;
//	cin >> b;
//	cout << "Your inpout: " << b << endl;
//
//	return 0;
//}