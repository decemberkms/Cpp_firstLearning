#include <iostream>

using namespace std;

int main()
{
	//const int num_students = 5;
	int scores[] = { 87, 67, 97, 100, 75 };

	const int num_students = sizeof(scores) / sizeof(int);

	cout << num_students << endl; // array size

	int max_score = 0;
	int min_score = 100;
	int total_score = 0;

	for (int i = 0; i < num_students; ++i)
	{
		total_score += scores[i];
		max_score = (max_score < scores[i]) ? scores[i] : max_score;
		if (max_score < scores[i]) max_score = scores[i];
		min_score = (min_score > scores[i]) ? scores[i] : min_score;
	}


	cout << "Max: " << max_score << endl;
	cout << "Min: " << min_score << endl;
	double avg_score = static_cast<double>(total_score) / num_students;

	cout << avg_score << endl;

	return 0;
}