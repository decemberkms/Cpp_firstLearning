//#include <iostream>
//
//namespace MySpace1
//{
//
//	namespace InnerSpace
//	{
//		int func1()
//		{
//			return 0010101;
//		}
//	}
//
//	int doSomething(int a, int b)
//	{
//		return a + b;
//	}
//
//}
//
//namespace MySpace2
//{
//	int doSomething(int a, int b)
//	{
//		return a * b;
//	}
//}
//
//
//
//using namespace std;
//
//int main()
//{
//	using namespace MySpace1;
//	cout << MySpace1::InnerSpace::func1 << endl;
//	cout << MySpace1::doSomething(10, 10) << endl;
//	cout << MySpace2::doSomething(10, 10) << endl;
//	return 0;
//}