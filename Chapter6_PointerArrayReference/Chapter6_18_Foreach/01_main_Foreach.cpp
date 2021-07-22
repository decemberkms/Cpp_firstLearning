#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
	vector<int> fibonacci = { 0,1,2,3,4,5,60,7,8,9,9 };
	//int fibonacci[] = { 0,1,2,3,4,5,60,7,8,9,9 };

	for (auto& num : fibonacci)
		num *= 10;

	for (const auto &num : fibonacci)
		cout << num << " ";


	int max_num = std::numeric_limits<int>::lowest();

	for (const auto& n : fibonacci)
		max_num = max(max_num, n);
	cout << endl;
	cout << max_num << endl;


	return 0;
}