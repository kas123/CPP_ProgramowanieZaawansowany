#pragma once
#include <list>
#include <iostream>

class NumbersList
{
public:

	void createList(int size);
	void divideListToPrimeAndNonPrime();
	bool isPrime(int n);
	void printAll();
	void printPrime();
	void printNonPrime();

private:
	std::list<int> allNumbers;
	std::list<int>primeNumbers; 
	std::list<int>nonPrimeNumbers;
};

