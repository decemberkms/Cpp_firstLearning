#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>
int main()
{
	using namespace std;

	//float f(3.141592f);
	//double d(3.141592);
	//long double lld(3.141592);

	//float f(123456789.0f); // 10 significant digits
	//cout << std::setprecision(16) << endl;
	//cout << f << endl;
	//
	//double d(0.1); // 10 significant digits
	//cout << d << endl;
	//cout << std::setprecision(17) << endl;
	//cout << d << endl;
	//
	//double d(0.1); // 10 significant digits        
	//cout << d << endl;
	//cout << std::setprecision(17) << endl;
	//cout << d << endl;


	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = - 5.0 / zero;
	double nan = zero / zero;

	cout << posinf << " " << std::isinf(posinf) << endl;
	cout << neginf << " " << std::isinf(neginf) << endl;
	cout << nan << " " << std::isnan(nan)  << endl;


	//cout << 1.0 / 3.0;

	//cout << 3.14 << endl;
	//cout << 31.4e-1 << endl;
	//cout << 31.4e-2 << endl; 
	//cout << 31.4e1 << endl;
	//cout << 31.4e2 << endl;


	//cout << sizeof(float) << endl;
	//cout << sizeof(double) << endl;
	//cout << sizeof(long double) << endl;
	//
	//cout << endl;
	//
	//cout << numeric_limits<float>::max() << endl;
	//cout << numeric_limits<double>::max() << endl;
	//cout << numeric_limits<long double>::max() << endl;

	//cout << endl;

	//cout << numeric_limits<float>::min() << endl;
	//cout << numeric_limits<double>::min() << endl;
	//cout << numeric_limits<long double>::min() << endl;
	//
	//cout << endl;

	//cout << numeric_limits<float>::lowest() << endl;
	//cout << numeric_limits<double>::lowest() << endl;
	//cout << numeric_limits<long double>::lowest() << endl;

	return 0;
}