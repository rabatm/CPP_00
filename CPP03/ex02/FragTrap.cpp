#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
    std::cout << "⾹ FragTrap is born 🐣" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	std::cout << "⾹ FragTrap is cloned 🐄" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "⾹ FragTrap is dead 💀" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	std::cout << "⾹ FragTrap is assigned 📜" << std::endl;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "⾹ FragTrap " << _name << " gives a high five 🖐️" << std::endl;
}