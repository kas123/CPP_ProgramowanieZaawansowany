// Napisz klas� StringConverter, kt�ra bedzie mia�a dwie metody (statyczne):
//std::string toCamelCase(std::string)
//std::string toSnakeCase(std::string)

#include <iostream>
#include "StringConverter.h"

int main()
{
	StringConverter text; 
	text.toCamelCase("Hello_s_d_a");
	text.toSnakeCase("helloSDA");
}


