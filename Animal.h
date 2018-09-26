#ifndef _ANIMAL_H_
#define _ANIMAL_H_

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

class Panda : public Animal {
public:
	Panda():
	Animal("pan pan pan pannnnddaaaaaa") {}

	int GetPower() { return 61; };
};

class Giraffe : public Animal {
public:
    Giraffe():
    Animal("giraffe giraffe"){}

    int GetPower() { return 9001; };

};

// Define your animals here

#endif  // _ANIMAL_H_
