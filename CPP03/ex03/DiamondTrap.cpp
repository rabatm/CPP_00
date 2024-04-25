#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), _name(name)
{
	std::cout << "💍" << "DiamondTrap " << _name << " created ⛏️" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), ScavTrap(src), _name(src._name)
{
	std::cout << "💍" << "DiamondTrap " << _name << " Cloned ⛏️" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "💍" << "DiamondTrap " << _name << " destroyed 💔" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void DiamondTrap::attack(ClapTrap &target)
{
	std::cout << "💍" << "DiamondTrap " << _name << " attacks " << target.getName() << " causing " << _attackDamage << " points of damage" << std::endl;
	target.takeDamage(_attackDamage);
}

void DiamondTrap::whoAmI()
{
	std::cout << "💍" << "DiamondTrap " << _name << " is " << _name << " and " << ClapTrap::getName() << std::endl;
}