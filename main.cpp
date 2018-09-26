#include <iostream>
#include "Animal.h"

int main() {
	Panda panda;
	std::cout << panda.MakeSound() << std::endl;

	Animal giraffe = Giraffe();
	std::cout << giraffe.MakeSound() << std::endl;
	return 0;
}
