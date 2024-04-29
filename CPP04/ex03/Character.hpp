#pragma once

#include "AMateria.hpp"


class Character : public ICharacter 
{
	private:
		std::string _name;
		AMateria *_inventory[4];
	public:
		Character(std::string name);
		Character(const Character &copy);
		virtual ~Character();
		Character &operator=(const Character &copy);
		
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		std::string const &getName() const;
};

