#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		virtual ~DiamondTrap();
		DiamondTrap &operator=(DiamondTrap const &rhs);

		void attack(ClapTrap &target);
		void whoAmI();
};