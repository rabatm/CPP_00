#include "AAnimal.hpp"

#pragma once

class Dog : public AAnimal
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
