#include "StringConverter.h"
#include <iostream>
#include <vector>
std::string StringConverter::toCamelCase(std::string text)
{
    for (int i = 0; i < text.size(); ++i)
    {
        if (text[i] != '_')
        {
            std::cout << text[i];
        }
        else
        {
            text[i] = (text[i + 1] - 32);
            text.erase(i + 1, 1);
            std::cout << text[i];
        }
    }
    std::cout << std::endl;
    return text; 
}

std::string StringConverter::toSnakeCase(std::string text)
{
    std::vector<char> vec; 
    vec.reserve(text.size());


    for (int i = 0; i < text.size(); ++i)
    {
        if (text[i] >= 97 && text[i] <= 122)
        {
            vec.push_back(text[i]);

        }
        else if (text[i] >= 65 && text[i] <= 90)
        {
            vec.push_back('_');
            vec.push_back((text[i] + 32));
        
        }
    }
    for (char c : vec) {
        std::cout << c;
    }
    std::cout <<  std::endl;

    return text;
}
//uzyh erase 

