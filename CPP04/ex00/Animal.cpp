#include "Animal.hpp"

Animal::Animal(Animal const &other)
{
	std::cout << "🐽Constructor animal 🐽" << std::endl;
	if (this != &other)
		*this = other;
}

Animal::Animal(/* args */)
{
	std::cout << "🐽 Animal constructor called 🐽" << std::endl;
}

Animal::~Animal()
{
	std::cout << "🐽 Animal destructor called 🐽" << std::endl;
}

Animal &Animal::operator=(Animal const &other)
{
	if (this != &other) 
	{
		*this = other;
	}
	return (*this);
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

void Animal::makeSound() const
{
	std::cout << "🐽 Animal sound 🐽" << std::endl;
}