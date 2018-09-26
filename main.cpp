#include <iostream>
#include "Animal.h"

int main() {

    Animal giraffe = Giraffe();
    std::cout << giraffe.MakeSound() << std::endl;
	return 0;
}
