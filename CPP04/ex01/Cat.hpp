#include "Animal.hpp"

#pragma	once

class Cat : public Animal
{
private:
	/* data */
	Brain *brain;
public:
	Cat();
	Cat(Cat const &other);
	~Cat();

	Cat operator=(Cat const &other);
	std::string getType() const;
	void makeSound() const;
};