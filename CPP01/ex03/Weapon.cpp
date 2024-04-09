#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
{
	this->_type = newType;
}

Weapon::~Weapon()
{

}

const std::string& Weapon::getType() const 
{
    return _type;
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}