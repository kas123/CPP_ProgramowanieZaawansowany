// Zadanie6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NumbersList.h"

int main()
{
	NumbersList	num; 
	num.createList(1000);
	std::cout << "Wszystkie liczby: " << std::endl;
	num.printAll(); 
	num.divideListToPrimeAndNonPrime();
	std::cout << "Liczby pierwsze: " << std::endl;
	num.printPrime();
	std::cout << "Pozostale liczby: " << std::endl;
	num.printNonPrime();

}

