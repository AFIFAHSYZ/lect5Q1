#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num = 0;
	int totalScore = 0;
	int score;
	int numberunder = 0;
	for (num = 0; num < 20; num++)
	{
		cin >> score;
		totalScore = totalScore + score;
		if (score < 50)
		{
			numberunder = numberunder + 1;
		}
	}
	cout << "total score is ; " << totalScore << endl;
	cout << "total score under 50 is ; " << numberunder << endl;
	return 0;
}