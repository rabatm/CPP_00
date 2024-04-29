#include <iostream>
#include "Brain.hpp"

#pragma once

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(Animal const &other);
	virtual ~Animal();

	Animal &operator=(Animal const &other);
	virtual void makeSound() const;
	std::string getType() const;
	void setType(std::string type);
};
