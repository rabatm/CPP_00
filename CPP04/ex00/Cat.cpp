#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "🐱 Cat constructor called 🐱" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &other) : Animal(other)
{
	std::cout << "🐱 Cat constructor called 🐱" << std::endl;
	if (this != &other)
		*this = other;
}

Cat::~Cat()
{
	std::cout << "🐱 Cat destructor called 🐱" << std::endl;
}

Cat Cat::operator=(Cat const &other)
{
	if (this != &other)
	{	
		*this = other;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "🐱 meuuuuuhhh meuuuuuhhh 🐱" << std::endl;
}

std::string Cat::getType() const
{
	return (this->_type);
}