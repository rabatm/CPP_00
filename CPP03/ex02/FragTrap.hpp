#include "ScavTrap.hpp"

#pragma once

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap();
		FragTrap &operator=(FragTrap const &rhs);

		void highFivesGuys();
		
};