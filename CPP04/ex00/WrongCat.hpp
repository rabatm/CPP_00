#include "wrongAnimal.hpp"

#pragma once

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat const &other);
	WrongCat &operator=(WrongCat const &other);

	void makeSound() const;
};