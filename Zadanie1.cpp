// Zadanie 1 Napisz funkcjê, która odwróci podanego stringa.
//
#include <iostream>
#include <string>

class StringReverse
{
public:
    StringReverse(std::string text)
        :_text(text)
    {
    };
    void reversed()
    {
        
        for (int i= _text.size()-1; i>=0; --i)
        {
            std::cout << _text[i]; 
        }

    };
    void getString()
    {
        for (int i = 0; i<= _text.size(); ++i)
        {
            std::cout << _text[i];
        }
    };

private:
    std::string _text;
};

int main()
{
    StringReverse str("Ala ma duzo kotow");
    str.reversed();



}


