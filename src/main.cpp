#include "hello_world.hpp"
#include "author.hpp"

int main(int argc, char *argv[]) {
	HelloWorld helloWorld;
	helloWorld.sayHello();

	Author author;
	author.aboutThisPrograms();

	return 0;
}
