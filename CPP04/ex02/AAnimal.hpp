#include <iostream>
#include "Brain.hpp"

#pragma once

class AAnimal
{
protected:
	std::string _type;
public:
	AAnimal();
	AAnimal(AAnimal const &other);
	virtual ~AAnimal();

	AAnimal &operator=(AAnimal const &other);
	virtual void makeSound() const = 0;
	std::string getType() const;
	void setType(std::string type);
};
