#include "Animal.hpp"

#pragma	once

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &other);
	~Cat();

	Cat operator=(Cat const &other);
	std::string getType() const;
	void makeSound() const;
};