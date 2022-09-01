#include "MorseCodeTranslator.h"
#include <iostream>
#include <vector>
#include <sstream>

std::string MorseCodeTranslator::toMorseCode(std::string text)
{
    for (int i = 0; i < text.size(); ++i)
    {
        auto it = latingToMorseAlphabet.find(text[i]);
        std::cout << it->second << " ";
        
    }
    return text; 
}

std::string MorseCodeTranslator::fromMorseCode(std::string text)
{
    std::istringstream input(text);
    std::vector<std::string> separated;
    std::string temp; 


    while (std::getline(input, temp, ' ')) 
    {

        separated.push_back(temp);
    }
    
    for (int i = 0; i < separated.size(); ++i)
    {
        auto it = morseToLatinAlphabet.find(separated.at(i));
        std::cout << it->second << " ";
    }
    return text;
}
