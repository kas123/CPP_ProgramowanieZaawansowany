// Zadanie5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StringCensor.h"

int main()
{
    StringCensor str; 
    str.censor("wdowa");
    str.addCensoredLetter('p');
    str.censor("patyk");
    str.censor("antylopa");
}

