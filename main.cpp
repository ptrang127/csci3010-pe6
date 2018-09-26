#include <iostream>

#include "Animal.h"

int main() {
  Cat cat;
  std::cout << cat.MakeSound() << std::endl;
  
  Horse horsey;
	std::cout << horsey.MakeSound() << std::endl;
  
	Turtle turtle_friend;
	Dog dog_friend;

	std::cout << turtle_friend.MakeSound() << std::endl;
	std::cout << dog_friend.MakeSound() << std::endl;

	return 0;
}
