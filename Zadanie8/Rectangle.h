#pragma once
#include <random>
#include <iostream>
#include <algorithm>
#include <iterator>
class Rectangle 
{
public:
	Rectangle();
	Rectangle(int a, int b)
		:_a(a)
		, _b(b)
	{
	};
	virtual bool isSquare();
	virtual int recArea();
	virtual int getA();
	virtual int getB();


protected:
	int _a, _b = 0;
};

class RectangleGenerator : public Rectangle
{
public:
	RectangleGenerator();

	Rectangle* getRectangle(int range);

protected:

	std::random_device dev;
};

class RectangleManger : public RectangleGenerator
{
public:

	void genereteMultipleRec(int range, int howMany);
	void printRectangle();
	size_t countRectangleBiggerThen();
	std::vector<Rectangle> copyRectangles();

private:
	std::vector<Rectangle> randomRecs; 
	Rectangle* rectangle;
	std::vector<Rectangle> RecAreaBiggerThan50;
};
