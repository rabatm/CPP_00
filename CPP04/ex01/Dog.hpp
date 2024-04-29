#include "Animal.hpp"

#pragma once

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(Dog const &other);
	~Dog();

	Dog operator=(Dog const &other);
	std::string getType() const;
	void makeSound() const;
};
