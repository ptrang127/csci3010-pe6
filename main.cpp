#include <iostream>

#include "Animal.h"

int main() {

  Horse horsey;
	std::cout << horsey.MakeSound() << std::endl;
  
	Turtle turtle_friend;
	Dog dog_friend;

	std::cout << turtle_friend.MakeSound() << std::endl;
	std::cout << dog_friend.MakeSound() << std::endl;

	Animal giraffe = Giraffe();
	std::cout << giraffe.MakeSound() << std::endl;
  
	return 0;
}
