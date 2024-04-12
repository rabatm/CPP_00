#include "./PhoneBook.class.hpp"

PhoneBook::PhoneBook( int const maxContacts) : _maxContacts(maxContacts),  _nbContacts(0), _currentContacts(0)
{
	
	std::string items[] = {"", "Forget your smartphone ", "this old-school phonebook", "is the only way to connect in 1998", "©  MRABAT ", ""};
	menuDisplay(" <<<< Welcome in 1998 >>>>> ", items, 6);
}

PhoneBook::~PhoneBook(void)
{
	std::string menuItems[] = {" ","©  TERMINATOR ", ""};
	menuDisplay(" #### Hasta la vista, baby ####", menuItems, 2);
}

int PhoneBook::getNbContacts(void) const
{
	return this->_nbContacts;
}

int PhoneBook::getMaxContacts() const
{
	return this-> _maxContacts;
}

void PhoneBook::displayContactInfo(const std::string& searchID)
{
	const std::string stringNbContacts = toString(this->_nbContacts);

    try
    {
        int id = stringToInt(searchID);
        if (id >= 1 && id <= this->_nbContacts)
            this->_myContact[id].displayMyProfil();
        else
            std::cout << "ID must be between 1 and " + stringNbContacts +" ." << std::endl;
    }
    catch (std::invalid_argument& e)
    {
        std::cout << "Invalid ID: " << searchID << std::endl;
    }
    catch (std::out_of_range& e)
    {
        std::cout << "ID out of range: " << searchID << std::endl;
    }
}

void PhoneBook::searchContacts(void)
{
	int i = 1;
	std::string searchID;

	if (this->_nbContacts > 0)
	{
		std::string menuItems[] = {" ","Looking for a contact", "Type their ID to see the details", "or enter 0 to go back to the main menu.", " "};
		menuDisplay(" #### Search Menu ####", menuItems, 5);
		displayLine(43);
		std::cout << center("ID", 10); 
		std::cout << center("FIRSTNAME", 10); 
		std::cout << center("LASTNAME", 10); 
		std::cout << center("NICKNAME", 10)  + "|" << std::endl;
		displayLine(43);
		while (i <= this->_nbContacts)
		{
			this->_myContact[i].displayMyInfos();
			i++;
		}
		displayLine(43);
		std::cout << std::endl << "Your choice (1 - "+ toString(this->_nbContacts) +") -> ";
		std::getline(std::cin, searchID);
		if (searchID == "0")
			return;
		else
			displayContactInfo(searchID);
	}
	else
	{
		displayLine(60);
		std::cout << "😭 You don't have any friends. 😭" << std::endl;
		displayLine(60);
		displayPause();
		return;
	}
	searchContacts();

}

void PhoneBook::showMenu(void)
{
	std::string theChoice = "";
	std::string menuItems[] = {" ","ADD    - for add a contact", "SEARCH - for looking for a contact ", "EXIT   - for bye bye", ""};
	
	menuDisplay(" +++++ PhoneBook Menu ++++", menuItems, 4);
	std::cout << "Your choice -> ";
	std::getline(std::cin, theChoice);

	while (theChoice != "EXIT")
	{
		if (theChoice == "ADD")
		{
			if (this->_currentContacts == 8)
				this->_currentContacts = 1;
			else
				this->_currentContacts++;
			if (this->_nbContacts != this->_maxContacts)
				this->_nbContacts++;
				this->_myContact[this->_currentContacts].askContactInfos(this->_currentContacts);
					std::cout << getMaxContacts() << std::endl;
		}
		else if (theChoice == "SEARCH")
			this->searchContacts();
		else if (theChoice == "EXIT")
			return;
	}

}

