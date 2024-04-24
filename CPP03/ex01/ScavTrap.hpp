#include "ClapTrap.hpp"

#pragma once

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();
		ScavTrap &operator=(ScavTrap const &rhs);

		void attack(ClapTrap &target);
		void guardGate();
		
};