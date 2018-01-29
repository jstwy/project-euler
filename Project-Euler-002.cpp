// Project Euler: Problem 2 --------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
//initializations
	const int ONE = 1;
	const int TWO = 2;
	const int LIMIT = 4000000;

	int currentFib = ONE;
	int nextFib = TWO;
	int tempFib = 0;
	int sum = 0;
//program guts
	while (currentFib < LIMIT)
	{
	// add even Fibonacci numbers to running total
		if (currentFib % 2 == 0)
		{
			sum += currentFib;
		}
		tempFib = currentFib + nextFib;
		currentFib = nextFib;
		nextFib = tempFib;
	}
	cout << sum;
}