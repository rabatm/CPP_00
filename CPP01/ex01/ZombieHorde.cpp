#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) 
{
    Zombie* horde = new Zombie[N];
	int i = 0;

    while ( i < N) 
	{
        horde[i].setName(name);
		i++;
	}
    return horde;
}