#pragma once
#include <random>
#include <iostream>
#include <algorithm>
#include <iterator>
class Rectangle 
{
public:
	Rectangle()
	{};
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
	RectangleGenerator(int range) 
		: _range(range)
	{
		std::random_device dev;
		std::mt19937 rng(dev());
		std::uniform_int_distribution<std::mt19937::result_type> dist(1, range);

		_a = dist(rng);
		_b = dist(rng);
	};

protected:
	int _range;
};

class RectangleManger : public RectangleGenerator
{
public:

	RectangleManger(int range) : RectangleGenerator(range) {};
	void genereteMultipleRec(int range, int howMany);
	void printRectangle();

private:

	std::vector<RectangleGenerator> randomRecs; 
	RectangleGenerator* rectangleGen;
};
