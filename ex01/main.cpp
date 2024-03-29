#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <iostream>
#include <limits>

#include "./PhoneBook.class.hpp"

int main(void)
{
	PhoneBook my1998PB(8);

	std::cout << "^^^ Welcome in 1998 ^^^" << std::endl;
	
	const int currentNbContact = my1998PB.getNbContacts();
	my1998PB.showMenu();
}