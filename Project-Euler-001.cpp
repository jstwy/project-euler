// Project Euler: Problem 1 --------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
//initializations
	const int THREE = 3;
	const int FIVE = 5;
	const int LIMIT = 1000;

	int sum = 0;
//program
	for (int i = 0; i < LIMIT; i++)
	{
	// add multiples of 3 and 5 to running total
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	cout << sum;
}