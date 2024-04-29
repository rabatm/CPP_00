#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "💍 MateriaSource default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
	count = 0;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "💍 MateriaSource copy constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (copy.materia[i])
			materia[i] = copy.materia[i]->clone();
		else
			materia[i] = NULL;
	}
	count = copy.count;
}

MateriaSource::~MateriaSource()
{
	std::cout << "💍 MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (materia[i])
			delete materia[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	std::cout << "💍 MateriaSource assignation operator" << std::endl;
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (materia[i])
			delete materia[i];
		if (copy.materia[i])
			materia[i] = copy.materia[i]->clone();
		else
			materia[i] = NULL;
	}
	count = copy.count;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (count < 4)
	{
		materia[count] = m;
		count++;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] && materia[i]->getType() == type)
			return (materia[i]->clone());
	}
	return (NULL);
}