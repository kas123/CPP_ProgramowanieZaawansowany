#include "Rectangle.h"


Rectangle::Rectangle()
{
}

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

RectangleGenerator::RectangleGenerator()
{
}

Rectangle* RectangleGenerator::getRectangle(int range)
{
    dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, range);
    _a = dist(rng);
    _b = dist(rng);

    return this;
}

void RectangleManger::genereteMultipleRec(int range, int howMany)
{
    for (int i = 0; i < howMany; ++i)
    {
        rectangle = getRectangle(range); 
        randomRecs.push_back(*(rectangle));
    }
}

void RectangleManger::printRectangle()
{
    for_each(randomRecs.begin(), randomRecs.end(), [](Rectangle& rectangle)
        {
            std::cout << rectangle.getA() << " " << rectangle.getB() << std::endl; 
        });
}

size_t RectangleManger::countRectangleBiggerThen()
{
    size_t count = std::count_if(randomRecs.begin(), randomRecs.end(), [](Rectangle& rectangle)
        {
           return rectangle.recArea() >= 50;
        });         
    std::cout << "Prostokaty o polu wiekszym niz 50 :" << count << std::endl;
        
    return size_t();
}

std::vector<Rectangle> RectangleManger::copyRectangles()
{
    std::vector<Rectangle> squares; 
    std::copy_if(randomRecs.begin(), randomRecs.end(), std::back_inserter(squares), [](Rectangle& rectangle)
        {
            rectangle.getA() == rectangle.getB();
        });
        return squares;

}

     


