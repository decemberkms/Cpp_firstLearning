#include <iostream>
#include <vector>

using namespace std;

void printStack(const vector<int>& stack)
{
	for (auto& e : stack)
		cout << e << " "; 
	cout << endl;
}

int main()
{
	// int *v_ptr = new int[3]{1,2,3};   similar but not the same
	std::vector<int> v{ 1,2,3 };

	// size, capacity - datasize?    new and delete are slow! so do not use too often
	// how to use vector so little -> POINT!!!
	// capacity -> actual size , size -> the size I am using - length

	//v.resize(2); // if reducing/ then it hides the rest!!
	v.reserve(1024);
	for (auto& element : v)
	{
		cout << element << endl;
	}

	cout << endl;

	cout << v.size() << endl;;
	cout << v.capacity() << endl;

	//cout << v.at(2) << endl; 

	int* ptr = v.data();   // forcefully take the value!!

	cout << ptr[2] << endl;

	//size and capacity are differenct.   size - the size we see/ capacity actual size the memory takes

	std::vector<int> stack;

	stack.push_back(3);
	printStack(stack);
	stack.push_back(5);
	printStack(stack);
	stack.push_back(7); 
	printStack(stack);
	stack.pop_back();
	printStack(stack);
	stack.pop_back();
	printStack(stack);
	stack.pop_back();
	printStack(stack);


	// why using vector? using reserve you don't need new and delte so fast
	// if too big reserve -> can be wasteful
	return 0;
}