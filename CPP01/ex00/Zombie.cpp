#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName) : _name(zombieName)
{

}

Zombie::~Zombie()
{
	std::cout << this->_name + " dead" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}