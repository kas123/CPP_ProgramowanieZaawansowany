#include "Rectangle.h"


bool Rectangle::isSquare()
{
    return _a==_b;
}

int Rectangle::recArea()
{
    return _a * _b;
}

int Rectangle::getA()
{
    return _a;
}

int Rectangle::getB()
{
    return _b;
}



void RectangleManger::genereteMultipleRec(int range, int howMany)
{
    for (int i = 0; i < howMany; ++i)
    {
  
    }
}

void RectangleManger::printRectangle()
{
    for_each(randomRecs.begin(), randomRecs.end(), std::ostream_iterator<int>(std::cout, " "));
}

RectangleGenerator::RectangleGenerator()
{
}
RectangleManger::RectangleManger(int range)
{
}
