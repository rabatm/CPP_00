/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabat <mrabat@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:46:24 by mrabat            #+#    #+#             */
/*   Updated: 2024/04/24 22:40:51 by mrabat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string myName) : _name(myName), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "🐣 ClapTrap " << this->_name << " has been born to be .." << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._hitPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << "🐑 ClapTrap " << this->_name << " has been cloned" << std::endl;
};
ClapTrap::~ClapTrap(void)
{
	std::cout << "🏴‍☠️ ClapTrap " << this->_name << " has been destroyed 💋" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << "😿 " << this->_name << " took " << amount << " damage 🩸" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	std::cout << "⛑️ " << this->_name << " has been repaired by " << amount << " points ❤️" << std::endl;
}
void ClapTrap::attack(ClapTrap &target)
{
	target.takeDamage(this->_hitPoints);
	std::cout << "☢️" << this->_name << " attacks " << target._name << " causing " << this->_hitPoints << " points of damage 🔻" << std::endl;
}
std::string ClapTrap::getName(void) const
{
	return this->_name;
}