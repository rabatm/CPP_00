/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabat <mrabat@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:46:24 by mrabat            #+#    #+#             */
/*   Updated: 2024/04/19 14:53:46 by mrabat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string myName) : _name(myName)
{
};

ClapTrap::ClapTrap(ClapTrap const &src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._hitPoints;
	this->_attackDamage = src._attackDamage;
};

ClapTrap::~ClapTrap(void)
{
};

void ClapTrap::attack(ClapTrap &target)
{
	target.takeDamage(this->_hitPoints);
	target.
}
