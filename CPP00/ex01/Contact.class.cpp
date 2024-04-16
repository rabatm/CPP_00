#include "./Contact.class.hpp"
#include <sstream>
#include "utils.hpp"

Contact::Contact(void)
{
	return;	
}

Contact::~Contact(void)
{
	return;
}

bool isValidPhoneNumber(const std::string& phoneNumber) {
    if (phoneNumber.length() != 10) {
        return false;
    }

    for (std::string::const_iterator it = phoneNumber.begin(); it != phoneNumber.end(); ++it) {
        if (*it < '0' || *it > '9') {
            return false;
        }
    }

    return true;
}

std::string askInfo(std::string infoDisplay)
{
	std::string inputInfo;

	do
	{
		std::cout << infoDisplay + " : ";
		std::getline(std::cin, inputInfo);
		if(inputInfo.empty())
			std::cout << "NO EMPTY INFO PLEASE 🌧️ " + infoDisplay << std::endl;
		std::cout << std::endl;
	} while (inputInfo.empty());
	return inputInfo;
}

std::string askPhone(std::string infoDisplay)
{
	std::string phone;
	do
	{
		phone = askInfo(infoDisplay);
		if (!isValidPhoneNumber(phone))
				std::cout << "INVALID PHONE NUMBER 🌧️  (0000000000)" << std::endl;
	}
	while (!isValidPhoneNumber(phone));
	return phone;
}

void Contact::askContactInfos(int newId)
{

	std::string items[] = {"", "All information is mandatory ..", ""};
	menuDisplay(" ++++ Add menu ++++ ", items, 2);
	this->_myId = newId;
	this->_firstName = askInfo("firstname");
	this->_lastName = askInfo("lastname");
	this->_nickName = askInfo("nickname");
	this->_phoneNumber = askPhone("phonenumber (00000000)");
	this->_darkSecret = askInfo("dark secret");
}

void Contact::displayMyInfos() const
{
	std::cout << "|" + formatDisplay(toString(this->_myId)); 
	std::cout << formatDisplay(this->_firstName); 
	std::cout << formatDisplay(this->_lastName);
	std::cout << formatDisplay(this->_nickName) << std::endl;
}


void Contact::displayMyProfil() const
{
	const std::string myIdString = toString(this->_myId);
	
	displayLine(47);
	std::cout << center(myIdString + " " + this->_firstName + " " + this->_lastName, 49) << std::endl;
	displayLine(47);
	std::cout << "| ID           : " + myIdString << std::endl;
	std::cout << "| FIRSTNAME    : " + this->_firstName << std::endl;
	std::cout << "| LASTNAME     : " + this->_lastName << std::endl;
	std::cout << "| NICKNAME     : " + this->_nickName << std::endl;
	std::cout << "| PHONENUMBER  : " + this->_phoneNumber << std::endl;
	std::cout << "| DARK SECRET  : " + this->_darkSecret << std::endl;
	displayLine(47);
	displayPause();
}