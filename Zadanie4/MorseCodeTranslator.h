#pragma once
#include <string>
#include <map>

class MorseCodeTranslator
{
public:
	std::string toMorseCode(char letter);// latwiejsza
	char fromMorseCode(std::string morseSign);

private:

	std::map<char, std::string> latingToMorseAlphabet
	{ {'A',	".-"},
	{'B',	"-..."},
	{'C',	"-.-."},
	{'D',	"-.."},
	{'E'	,"."},
	{'F'	,"..-."},
	{'G'	,"--."},
	{'H'	,"...."},
	{'I'	,".."},
	{'J'	,".---"},
	{'K'	,"-.-"},
	{'L'	,".-.."},
	{'M'	,"--"},
	{'N'	,"-."},
	{'O'	,"---"},
	{'P'	,".--."},
	{'Q'	,"--.-"},
	{'R'	,".-."},
	{'S'	,"..."},
	{'T'	,"-"},
	{'U'	,"..-"},
	{'V'	,"...-"},
	{'W'	,".--"},
	{'X'	,"-..-"},
	{'Y'	,"-.--"},
	{'Z'	,"--.."} };

	std::map<std::string, char> morseToLatinAlphabet
	{ {	".-",'A'},
	{"-...",'B'},
	{"-.-.",'C'},
	{"-..",'D'},
	{".",'E'},
	{"..-.",'F'},
	{"--.",'G'},
	{"....",'H'},
	{"..", 'I'},
	{".---", 'J'},
	{"-.-",'K'},
	{".-..",'L'},
	{"--",'M'},
	{"-.",'N'},
	{"---",'O'},
	{".--.",'P'},
	{"--.-",'Q'},
	{".-.",'R'},
	{"...",'S'},
	{"-",'T'},
	{"..-",'U'},
	{"...-",'V'},
	{".--",'W'},
	{"-..-",'X'},
	{"-.--",'Y'},
	{"--..",'Z'} };

};


//kazdy znak rozdzielony spacja 

