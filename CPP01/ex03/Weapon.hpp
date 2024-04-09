#include <string>


#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string newType);
	~Weapon();
	const 	std::string& getType() const;
	void	setType(std::string newType);
};

#endif