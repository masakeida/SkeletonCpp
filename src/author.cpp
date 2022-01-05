#include <iostream>
#include <string>
#include "author.hpp"

Author::Author()
{
	this->description = "C++ skelton programs written by ";
	this->name = "Masayuki Keida";
}

void Author::aboutThisPrograms()
{
	std::cout << this->description << this->name << std::endl;
}
