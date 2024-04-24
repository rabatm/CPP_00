#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "New zombie" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name + " dead" << std::endl;
}
void Zombie::setName(std::string nameZombie)
{
	this->_name = nameZombie;
}

void Zombie::announce()
{
	std::cout << this->_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

