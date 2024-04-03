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

void PhoneBook::searchContacts(void)
{
	int i = 1;

	if (this->_nbContacts > 0)
	{
		displayLine(43);
		std::cout << "|";
		std::cout << center("ID"); 
		std::cout << center("FIRSTNAME"); 
		std::cout << center("LASTNAME"); 
		std::cout << center("NICKNAME") << std::endl;
		displayLine(43);
		while (i < 9)
		{
			this->_myContact[i].displayMyInfos();
			i++;
		}
		displayLine(43);
		
		
	}
	else
	{
		displayLine(60);
		std::cout << "😭 You don't have any friends. 😭" << std::endl;
		displayLine(60);
	}

}

void PhoneBook::showMenu(void)
{
	std::string theChoice;
	std::string menuItems[] = {" ","ADD    - for add a contact", "SEARCH - for looking for a contact ", "EXIT   - for bye bye", ""};
	menuDisplay(" +++++ PhoneBook Menu ++++", menuItems, 5);
	std::cout << "Your choice -> ";
	std::getline(std::cin, theChoice);

	if (theChoice == "ADD")
	{
		if (this->_nbContacts == 8)
			this->_nbContacts = 1;
		else
			this->_nbContacts++;
		this->_myContact[this->_nbContacts].askContactInfos(this->_nbContacts);
	}
	else if (theChoice == "SEARCH")
		this->searchContacts();
	else
	{
		std::cout << "!!!!! NO UNDERSTAND !!!!" << std::endl;
	}
	showMenu();
}

