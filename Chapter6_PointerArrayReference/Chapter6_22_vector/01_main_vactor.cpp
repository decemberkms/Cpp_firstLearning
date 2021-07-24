#include <iostream>
#include <vector>

using namespace std;

int main()   // std::array > static allocation replacement/ vector dynamic allocation replacement
{
	std::vector<int> my_vec; // size is not necessary

	std::vector<int> array2 = { 1,2,3,4,5 };

	cout << array2.size() << endl;	

	std::vector<int> array3 = { 1,2,5 };

	cout << array3.size() << endl;

	std::vector<int> array4  { 1,2 };

	cout << array4.size() << endl;

	array4.resize(10);
	cout << array4.size() << endl;

	for (auto& itr : array2)
		cout << itr << " ";
	// vector's memory is deleted automatically - dynamic allocation/ no memory leak
	
	return 0;
}
