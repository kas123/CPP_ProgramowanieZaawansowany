// Zadanie8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rectangle.h"


int main()
{
    std::cout << "Hello World!\n";
    RectangleManger rec; 
    rec.genereteMultipleRec(10, 100);
  
    rec.printRectangle();
    rec.countRectangleBiggerThen();
    
}


