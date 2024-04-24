#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("ClapTrap");
	ClapTrap clapTrap2(clapTrap);

	clapTrap.attack(clapTrap2);
	clapTrap2.takeDamage(5);
	clapTrap2.beRepaired(5);
	return (0);
}