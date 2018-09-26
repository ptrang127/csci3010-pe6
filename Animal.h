#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <string>
class Animal {
public:
	Animal(std::string sound):
	sound_(sound)
	{}

	std::string MakeSound() const {return sound_; }

	void Fight(Animal &opponent);

	virtual int GetPower() { return 0; };

private:
	std::string sound_;
};

class Turtle : public Animal {
public:
	Turtle():
	Animal("turtle turtle turtle")
	{}


	int GetPower() { return 7; };

};

class Horse : public Animal {
public:
	Horse():
	Animal("hey hey heyyy") {}

	int GetPower() { return 91; };
};

class Cat : public Animal {
public:
    Cat():
    Animal("meow"){}

    int GetPower() { return 9001; };
  
};

// Define your animals here

class Dog : public Animal {
public:
        Dog():
        Animal("dog dog dog")
        {}


        int GetPower() { return 3; };

};

#endif  // _ANIMAL_H_
