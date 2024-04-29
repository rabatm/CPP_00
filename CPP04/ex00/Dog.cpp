#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "🐶 Dog constructor called 🐶" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << "🐶 Dog constructor called 🐶" << std::endl;
	if (this != &other)
		*this = other;
}

Dog::~Dog()
{
	std::cout << "🐶 Dog destructor called 🐶" << std::endl;
}

Dog Dog::operator=(Dog const &other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "🐶 Woof Woof 🐶" << std::endl;
}

std::string Dog::getType() const
{
	return (this->_type);
}

