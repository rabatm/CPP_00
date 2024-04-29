#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "🐟 WrongCat constructor called 🐟" << std::endl;
	this->setType("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "🐟 WrongCat destructor called 🐟" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other)
{

}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
	if (this != &other)
		*this = other;
	return (*this);
}