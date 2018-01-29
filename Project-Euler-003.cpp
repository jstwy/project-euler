#include <iostream>
using namespace std;

// function prototype
bool isPrime(long long& candidate);

int main()
{
// initializations
	const long long TARGET = 600851475143;

	long long workingNum = TARGET;
/*
* Finds the largest prime factor of TARGET. TARGET is successively divided by
* numbers incrementing by one. Once a factor is found, the factor is tested
* for primeness. If the factor is both prime and equal to the current
* quotient, then the factor is the largest prime factor of TARGET.
*/
	for (long long i = 2; i < TARGET; i++)
	{
		if (workingNum % i == 0)
		{
			cout << i << endl;
			workingNum /= i;
			if (isPrime(i) == 1 && workingNum == i)
			{
				break;
			}
		}
	}
}

/*
* Finds factors of the candidate number. If a factor is found, it is added to
* a tally. If the tally is greater than two (i.e. factors other than 1 and
* itself were found), the function will return FALSE to indicate the candidate
* was not found to be prime.
*/
bool isPrime(long long& candidate)
{
	int factorTally = 0;

	for (int i = candidate; i > 0; i--)
	{
		if (candidate % i == 0)
		{
			factorTally += 1;
		}
	}
	if (factorTally != 2) // the candidate number is not a prime number
	{
		return false;
	}
	else // the candidate number is a prime number
	{
		return true;
	}
}