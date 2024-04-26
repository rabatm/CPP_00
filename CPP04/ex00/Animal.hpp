#include <iostream>

#pragma one

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(Animal const &other);
	~Animal();

	Animal operator=(Animal const &other);

};

Animal::Animal(/* args */)
{
}

Animal::~Animal()
{
}
