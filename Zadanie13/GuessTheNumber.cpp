#include "GuessTheNumber.h"
#include <random>
#include <iostream>

GuessTheNumber::GuessTheNumber()
{
	std::random_device dev;
	std::mt19937 rng(dev());
	const std::uniform_int_distribution<std::mt19937::result_type> dist(1, 100);

	number = dist(rng);
}

int GuessTheNumber::getNumber() noexcept
{
	return number;
}

void GuessTheNumber::startGuessing()
{
	std::cout << "Zacznij zgadywanie liczby z przedzialu 1-100" << std::endl;

	int guess = 0;
	do
	{
		std::cin >> guess;
		if (guess != 0)
		{
			if ((guess > number) && (abs(guess - number) <= 3))
				std::cout << "Jestes blisko ale, moja liczba jest mniejsza, zgaduj dalej" << std::endl;

			else if (guess > number)
				std::cout << "Moja liczba jest mniejsza, zgaduj dalej" << std::endl;

			else if ((guess < number) && (abs(guess - number) <= 3))
				std::cout << "Jestes blisko ale, moja liczba jest wieksza, zgaduj dalej" << std::endl;

			else if (guess < number)
				std::cout << "Moja liczba jest wieksza, zgaduj dalej" << std::endl;
		}
		if (guess == number)
			std::cout << "Zgadles!Gratulacje" << std::endl;

	} while (number != guess);

}

