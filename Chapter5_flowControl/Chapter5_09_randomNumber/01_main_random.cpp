#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;


unsigned int PRNG()
{
	static unsigned int seed = 5523;   // computer is not able to generate random numbers actually.

	seed = 8253289 * seed + 2395403;

	return seed % 32768;
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0); // RAND_MAX the biggest number from random number
	 
	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}


int main() 
{
	/*for (int count = 1; count <= 100; ++count)
	{

		cout << PRNG() << "\t";
		if (count % 5 == 0) cout << endl;
	}*/


	//std::srand(5323); // seed  used for debugging
	std::srand(static_cast<unsigned int>(std::time(0))); // for real random, give time.


	for (int count = 1; count <= 100; ++count)
	{

		cout << getRandomNumber(5,9) << "\t";
		if (count % 5 == 0) cout << endl;
	}


	std::random_device rd;
	std::mt19937 mersenne(rd()); // create a twister
	std::uniform_int_distribution<> dice(1, 6);

	for (int i = 1; i <= 20; ++i)
	{
		cout << dice(mersenne) << endl;
	}

	return 0;
}