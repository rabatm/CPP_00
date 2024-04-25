#pragma once

#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap();
		DiamondTrap &operator=(DiamondTrap const &rhs);

		void attack(ClapTrap &target);
		void whoAmI();
};