#include "brain.hpp"

Brain::Brain()
{
	std::cout << "🧠 Brain constructor called 🧠" << std::endl;
}

Brain::~Brain()
{
	std::cout << "🧠 Brain destructor called 🧠" << std::endl;
}

Brain::Brain(Brain const &other)
{
	std::cout << "🧠 Brain copy constructor called 🧠" << std::endl;
	if (this != &other)
		*this = other;
}

Brain &Brain::operator=(Brain const &other)
{
	std::cout << "🧠 Brain assignation operator called 🧠" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}