#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;
	Dog dog_friend;

	std::cout << turtle_friend.MakeSound() << std::endl;
	std::cout << dog_friend.MakeSound() << std::endl;

	return 0;
}
