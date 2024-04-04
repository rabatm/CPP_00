#include <string>
#include <iostream>

#ifndef ZOMBIE_HPPZOMBIE_HPP
#define ZOMBIE_HPPZOMBIE_HPP

class Zombie
{
private:
	std::string	_name;
public:
	Zombie();
	~Zombie();

	void setName(std::string nameZombie);
	void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif