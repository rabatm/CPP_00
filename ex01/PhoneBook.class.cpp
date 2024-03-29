#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <iostream>
#include <limits>


#include "./PhoneBook.class.hpp"

PhoneBook::PhoneBook( int const maxContacts) : _maxContacts(maxContacts),  _nbContacts(0)
{
	std::cout << "PhoneBookConstructor" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBookDestructor" << std::endl;
	return;
}

int PhoneBook::getNbContacts(void) const
{
	return this->_nbContacts;
}

int PhoneBook::getMaxContacts() const
{
	return this-> _maxContacts;
}

void PhoneBook::showMenu(void)
{
	std::string theChoice;

	std::cout << "		🐈 MENU 🐈" << std::endl;
	std::cout << "TAPE 'ADD' for ➕ contact" << std::endl;
	std::cout << "TAPE 'SEARCH' for 🔍 contact" << std::endl;
	std::cout << "TAPE 'EXIT' for bye bye 🥀" << std::endl;
	std::getline(std::cin, theChoice);

	if (theChoice == "ADD")
		this->_myContact[this->_nbContacts].askContactInfos(this->_nbContacts);
	else if (theChoice == "SEARCH")
		this->_myContact[0].displayMyInfos();
	else
	{
		std::cout << "☃️ NO UNDERSTAND ☃️" << std::endl;
	}
	showMenu();
}

