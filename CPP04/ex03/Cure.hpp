#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
	Cure();
	Cure(const Cure &copy);
	virtual ~Cure();
	Cure &operator=(const Cure &copy);
	
	AMateria* clone() const;
	void use(ICharacter& target);
};

