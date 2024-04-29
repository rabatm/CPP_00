#include "AAnimal.hpp"

AAnimal::AAnimal(AAnimal const &other)
{
	std::cout << "🐽Constructor AAnimal 🐽" << std::endl;
	if (this != &other)
		*this = other;
}

AAnimal::AAnimal(/* args */)
{
	std::cout << "🐽 AAnimal constructor called 🐽" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "🐽 AAnimal destructor called 🐽" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &other)
{
	if (this != &other) 
	{
		*this = other;
	}
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->_type);
}

void AAnimal::setType(std::string type)
{
	this->_type = type;
}

void AAnimal::makeSound() const
{
	std::cout << "🐽 AAnimal sound 🐽" << std::endl;
}