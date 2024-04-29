#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "⾹ Character " << _name << " created ⾹" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	std::cout << "⾹ Character " << _name << " copied ⾹" << std::endl;
	if (this != &copy)
		*this = copy;
}

Character::~Character()
{
	std::cout << "⾹ Character " << _name << " destroyed ⾹" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character &Character::operator=(const Character &copy)
{
	std::cout << "⾹ Character " << _name << " assigned ⾹" << std::endl;
	if (this != &copy)
	{
		_name = copy._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = copy._inventory[i]->clone();
		}
	}
	return *this;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << "⾹ " << m->getType() << " equipped ⾹" << std::endl;
			return;
		}
	}
	std::cout << "⾹ Inventory full ⾹" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout << "⾹ Invalid index ⾹" << std::endl;
		return;
	}
	std::cout << "⾹ " << _inventory[idx]->getType() << " unequipped ⾹" << std::endl;
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout << "⾹ Invalid index ⾹" << std::endl;
		return;
	}
	std::cout << "⾹ " << _inventory[idx]->getType() << " used on " << target.getName() << " ⾹" << std::endl;
	_inventory[idx]->use(target);
}
std::string const & Character::getName() const
{
    return _name;
}