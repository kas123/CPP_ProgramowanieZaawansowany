#include "NumbersList.h"

void NumbersList::createList(int size)
{
	for (int i = 1; i <= size; ++i)
	{
		allNumbers.push_back(i);
	}
}

void NumbersList::divideListToPrimeAndNonPrime()
{
	for (auto it = allNumbers.front(); it != allNumbers.back(); ++it)
		if (isPrime(it))
		{
			primeNumbers.push_back(it);
		}
		else
			nonPrimeNumbers.push_back(it); 
}

bool NumbersList::isPrime(int n)
{
	if (n <= 1)
		return false;
	
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}

void NumbersList::printAll()
{
	for (auto num : allNumbers)
		std::cout << num <<" ";
	std::cout << std::endl;
}
void NumbersList::printPrime()
{
	for (auto num : primeNumbers)
		std::cout << num << " ";
	std::cout << std::endl;
}
void NumbersList::printNonPrime()
{
	for (auto num : nonPrimeNumbers)
		std::cout << num << " ";
	std::cout << std::endl;
}
