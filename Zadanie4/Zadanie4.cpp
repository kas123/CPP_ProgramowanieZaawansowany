//Zadanie 4
//Napisz klas�, kt�ra umo�liwi kodowanie i dekodowanie stringa na alfabet Morsea.Ignorujemy znaki specjalne
//KlasaMorseCodeTranslator
//toMorseCode
//fromMorseCode
//https ://morsecode.world/international/translator.html

#include <iostream>
#include "MorseCodeTranslator.h"

int main()
{
    MorseCodeTranslator translator; 
    translator.toMorseCode("PIESEK");
    std::cout << std::endl; 
    translator.fromMorseCode("-.- --- - . -.-");
    
    
}
