#include "Zombie.hpp"


int main( void )
{
	Zombie* mainZombie = newZombie("Arthur");

	randomChump("BILLY");
	delete mainZombie;
}