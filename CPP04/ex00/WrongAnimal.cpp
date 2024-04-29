#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
	std::cout << "🐾 WrongAnimal constructor called 🐾" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "🐾 WrongAnimal destructor called 🐾" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	std::cout << "🐾 WrongAnimal constructor called 🐾" << std::endl;
	if (this != &other)
		*this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "🔈 WrongAnimal sound 🔈" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}
