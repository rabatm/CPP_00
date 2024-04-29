#pragma once

#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class IMateriaSource;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];
		int count;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		virtual ~MateriaSource();
		MateriaSource &operator=(const MateriaSource &copy);
		
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);
};