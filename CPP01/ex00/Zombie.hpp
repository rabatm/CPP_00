#include <string>
#include <iostream>

#ifndef ZOMBIE_HPPZOMBIE_HPP
#define ZOMBIE_HPPZOMBIE_HPP

class Zombie
{
private:
	const std::string	_name;
	/* data */
public:
	Zombie(std::string zombieName);
	~Zombie();
	void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif