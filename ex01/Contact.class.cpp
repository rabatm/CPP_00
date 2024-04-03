#include "./Contact.class.hpp"
#include "utils.hpp"

Contact::Contact(void)
{
	return;	
}

Contact::~Contact(void)
{
	return;
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

void Contact::askContactInfos(int newId)
{

	std::string items[] = {"", "All information is mandatory ..", ""};
	menuDisplay(" ++++ Add menu ++++ ", items, 3);
	this->_myId = newId;
	this->_firstName = askInfo("firstname");
	this->_lastName = askInfo("lastname");
	this->_nickName = askInfo("nickname");
	this->_phoneNumber = askInfo("phonenumber");
	this->_darkSecret = askInfo("dark secret");
}

void Contact::displayMyInfos() const
{
	std::cout << "|" + formatDisplay(std::to_string(this->_myId)); 
	std::cout << formatDisplay(this->_firstName); 
	std::cout << formatDisplay(this->_lastName);
	std::cout << formatDisplay(this->_nickName) << std::endl;
}