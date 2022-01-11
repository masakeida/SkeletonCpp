#include <iostream>
#include <string>
#include "hello_world.hpp"

HelloWorld::HelloWorld()
{
	this->hello = "Hello World!";
}

void
HelloWorld::sayHello()
{
	std::cout << this->hello << std::endl;
}
