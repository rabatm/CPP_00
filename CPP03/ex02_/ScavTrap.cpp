#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "🦾 ScavTrap " << _name << " is alive ! alive ! 🤖" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "🦾 ScavTrap " << _name << " is to be alive, to be ... 🎶" << std::endl;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
}

ScavTrap::~ScavTrap()
{
	std::cout << "🦾 ScavTrap " << _name << " is dead 💀 ! but in your ❤️" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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

void ScavTrap::attack(ClapTrap &target)
{
	std::cout << "🦾 ScavTrap " << _name << " 🔫 attacks " << target.getName() << " causing " << _attackDamage << " 🔻 points of damage" << std::endl;
	target.takeDamage(_attackDamage);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is guarding the gate ⭐️" << std::endl;
}