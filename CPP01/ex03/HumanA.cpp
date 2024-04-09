#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon& newWeapon) : _myWeapon(newWeapon), _name(newName)
{
	
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->_name + " attacks with their " + this->_myWeapon.getType() << std::endl;
}