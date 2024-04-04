#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie* myZombie = new Zombie(name);
	return myZombie;
}
