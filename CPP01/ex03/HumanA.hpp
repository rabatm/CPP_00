#include "Weapon.hpp"
#include <iostream>

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
private:
	Weapon&		_myWeapon;
	std::string	_name;
	/* data */
public:
	HumanA(std::string newName, Weapon& newWapon);
	~HumanA();
	void attack();
};

#endif