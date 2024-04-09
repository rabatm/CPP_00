#include "Weapon.hpp"
#include <iostream>

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
private:
	Weapon*		_myWeapon;
	std::string	_name;
	/* data */
public:
	HumanB(std::string newName);
	~HumanB();
	void attack();
	void setWeapon(Weapon& newWapon);
};

#endif