#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <iostream>
#include <limits>

#include "./PhoneBook.class.hpp"
#

int main(void)
{
	PhoneBook my1998PB(8);

	std::string items[] = {"", "Forget your smartphone ", "this old-school phonebook", "is the only way to connect in 1998", "©  MRABAT ", ""};
	menuDisplay(" <<<< Welcome in 1998 >>>>> ", items, 6);
	
	const int currentNbContact = my1998PB.getNbContacts();
	my1998PB.showMenu();
}