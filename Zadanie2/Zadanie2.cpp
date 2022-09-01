// Zadanie 2
//Napisz funkcjê, która przyjmie dwa stringi i zwróci ile liter maj¹ wspólnych.

#include <iostream>
#include <set>

int countSharedLetters(std::string str1, std::string str2)
{
	std::set<char> s;

	for (int i = 0; i < str1.size(); ++i)
	{
		for (int k = 0; k < str2.size(); ++k)
		{
			if (str1[i] == str2[k])
				s.insert(str1[i]);
		}
	}
	return s.size();
}

int main()
{
	std::string pierwszy = "kasia";
	std::string drugi = "basia";
	std::cout << countSharedLetters(pierwszy, drugi);

}

