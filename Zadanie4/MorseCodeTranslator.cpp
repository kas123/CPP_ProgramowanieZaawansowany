#include "MorseCodeTranslator.h"

std::string MorseCodeTranslator::toMorseCode(char letter)
{
    auto it = latingToMorseAlphabet.find(letter); 
    
    return it->second;
}

char MorseCodeTranslator::fromMorseCode(std::string morseSign)
{
    auto it = morseToLatinAlphabet.find(morseSign);
    return it->second;
}
