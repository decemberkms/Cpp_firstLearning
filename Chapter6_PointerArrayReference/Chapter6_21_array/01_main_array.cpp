#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(array<int, 5>& my_arr) // & for not copying and not changed in the block
{
	cout << my_arr.size() << endl;
}

int main()
{
	//std::array
	
	//int my_old_arr[] = { 1,2,3,4,5 };
	array<int, 5> my_arr { 11,32,53,24,15 };
	//my_arr = { 0,1,2, };

	cout << my_arr[0] << endl;
	cout << my_arr.at(0) << endl;
	for (int num : my_arr)
		cout << num << endl;

	cout << my_arr.size() << endl;
	printLength(my_arr);


	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	std::sort(my_arr.begin(), my_arr.end());  // sorting
	std::sort(my_arr.rbegin(), my_arr.rend());  // sorting

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;
	return 0;
}