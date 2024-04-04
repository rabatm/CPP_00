#include "Zombie.hpp"


int main( void )
{
	int nbZombi = 42;
	Zombie* myHorde = zombieHorde(nbZombi, "billy");

    while ( 0 < nbZombi) 
	{
		nbZombi--;
        myHorde[nbZombi].announce();
		
	}
	delete [] myHorde;
}