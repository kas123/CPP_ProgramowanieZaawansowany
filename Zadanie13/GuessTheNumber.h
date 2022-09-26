#pragma once
class GuessTheNumber
{
public:

	GuessTheNumber();
	int getNumber() noexcept;
	void startGuessing(); 
private:
	int number;


};

