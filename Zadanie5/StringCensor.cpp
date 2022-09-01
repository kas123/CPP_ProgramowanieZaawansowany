#include "StringCensor.h"
#include <iostream>

void StringCensor::addCensoredLetter(char c)
{
	censoredLetters.insert(c);
}

std::string StringCensor::censor(std::string text)
{
	for (int i = 0; i < text.size(); ++i)
	{
		auto search = censoredLetters.find(text[i]);
		if (search == censoredLetters.end())
		{
			std::cout << text[i];
		}
		else
			std::cout << '*';
	}
	std::cout << std::endl; 
	return std::string();
}
