#include <iostream>

using namespace std;

void printHelloWorld()
{
	cout << "Hellow World!\n";
	return;
}

int addTwoNumbers(int num_a, int num_b)
{
	int sum = num_a + num_b;
	
	return sum;  // INT!!!
}

int multiplyTwoNum(int num_a, int num_b)
{
	int multi = num_a * num_b;
	printHelloWorld();
	return multi;
}

int main()
{
	cout << addTwoNumbers(1,2) << endl;
	cout << addTwoNumbers(5, 8) << endl;
	cout << addTwoNumbers(4, 10) << endl;
	printHelloWorld();
	cout << multiplyTwoNum(4, 10) << endl;
	return 0;
}