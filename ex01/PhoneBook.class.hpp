#include <iostream>
#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <iostream>
#include <limits>
#include "./utils.hpp"


#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H


class PhoneBook
{
private:
	Contact		_myContact[8];
	int			_nbContacts;
	int			_maxContacts;
	void		ftExit() const;
	void		askContactInfos(void);
	void		searchContacts(void);

public:
	PhoneBook(int const maxContacts);
	~PhoneBook();

	//fonciton
	int getNbContacts(void) const;
	int getMaxContacts() const;
	
	// fonction du menu
	void showMenu();
};


#endif