#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getLength(int& candidate);
bool isPal(int tbFlipped, int numLength);
int pow(int base, int exp);

int main()
{
// initializations
	int prod = 0;
	vector<int> pals;
// program
// use brute force to cycle through pairs of numbers and find products
	for (int i = 999; i > 100; i--)
	{
		for (int j = 999; j > 100; j--)
		{
			prod = i * j;
			if (isPal(prod, getLength(prod)))
			{
				cout << prod << ", the product of " << i << " & ";
				cout << j << " is a palindrome." << endl;
				pals.push_back(prod);
			}
		}	
	}
	cout << *max_element(pals.begin(), pals.end()) << " is the largest palindrome.";
}

// returns length of integer
int getLength(int& candidate)
{
	int div = 1;
	int length = 0;

	while (candidate % div != candidate)
	{
		length++;
		div *= 10;
	}

	return length;
}

// returns whether or not integer is a palindrome
bool isPal(int tbFlipped, int numLength)
{
	int workingFlipped = tbFlipped;
	int extractedDig = 0;
	int newNum = 0;
	int i = 0;
	int power = 0;

	while (i != numLength)
	{
		power = numLength - i - 1;
		extractedDig = (workingFlipped / pow(10, power));
		newNum += (extractedDig * pow(10, i));
		workingFlipped %= pow(10, power);
		i++;
	} 
	if (tbFlipped == newNum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// evaluates integer exponential expression
int pow(int base, int exp)
{
	int res = base;

	if (exp == 0)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i < exp; i++)
		{
			res *= base;
		}
		
		return res;
	}
}