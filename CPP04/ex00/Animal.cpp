#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor animal" << std::endl;
}

Animal::Animal(Animal const &other)
{
	if (other != *this)
		*this = other;
	std::cout << "Constructor animal by copy" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor animal" << std::endl;
}

Animal::operator=(Animal const &other)
{
	*this = other;
}