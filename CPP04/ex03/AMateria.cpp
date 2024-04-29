#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

std::string const & AMateria::getType() const
{
	return _type;
}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &copy)
{
	if (this != &copy)
		*this = copy;
}
AMateria &AMateria::operator=(const AMateria &copy)
{
	if (this != &copy)
		_type = copy._type;
	return *this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria::use(ICharacter& target) called" << std::endl;
	(void)target;
}