#include "FragTrap.hpp"

int main()
{
	FragTrap clapTrap("ClapTrap");
	FragTrap clapTrap2(clapTrap);

	clapTrap.attack(clapTrap2);
	clapTrap2.takeDamage(5);
	clapTrap2.beRepaired(5);
	clapTrap.highFivesGuys();
	return (0);
}