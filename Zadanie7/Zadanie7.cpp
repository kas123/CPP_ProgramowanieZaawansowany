// Zadanie7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <list>

void print(std::list<int> list)
{
    for (auto l : list)
    {
        std::cout << l << " ";
    }
    std::cout << std::endl << std::endl;
}
int main()
{
    std::list<int> randomNumbers; 
    
    //generowanie randomowych liczb i wrzucenie do listy
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 500);
    for (int i = 0; i < 50; ++i)
        randomNumbers.push_back(dist(rng));

    //wypisanie liczb dla sprawdzenia
    print(randomNumbers);

    std::list<int> evenNumbers; 
    std::list<int> oddNumbers;

    //podzial na parzyste i nieparzyste i wrzucenie do dwoch osobnych list
    for (auto l : randomNumbers)
    {
        if ((l % 2) == 0)
            evenNumbers.push_back(l);
        else     
            oddNumbers.push_back(l);
    }

    evenNumbers.sort();
    oddNumbers.sort();

    //wypisanie parzystych i nieparzystych dla sprawdzenia
    print(evenNumbers);
    print(oddNumbers);

    std::list<int> finalList; 

    //polaczenie dwoch list
    finalList.splice(finalList.begin(),evenNumbers);
    finalList.splice(finalList.end(),oddNumbers);

    print(finalList);



}


