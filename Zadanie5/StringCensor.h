#pragma once
#include <string>
#include <set>
class StringCensor
{
public:
	void addCensoredLetter(char c);
	std::string censor(std::string text); 
private:
	std::set<char> censoredLetters{ 'd' , 'o' , 'w' ,'a' };

};

