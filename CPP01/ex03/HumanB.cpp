#include "HumanB.hpp"

HumanB::HumanB(std::string newName) : _name(newName)
{
	
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (_myWeapon) 
		std::cout << _name << " attacks with their " << _myWeapon->getType() << std::endl;
	else
        std::cout << _name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& newWapon)
{
	_myWeapon = &newWapon;
}