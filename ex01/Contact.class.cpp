#include "./Contact.class.hpp"

Contact::Contact(void)
{
	return;	
}

Contact::~Contact(void)
{
	return;
}

std::string formatDisplay(std::string info)
{
	std::string newString;

	if (info.length() >= 10)
		newString = info.substr(0,9) + ".|"; 
	else
		newString = info.insert(0, 10 - info.length(), ' ') + "|";
		return newString;
}
std::string askInfo(std::string infoDisplay)
{
	std::string inputInfo;

	do
	{
		std::cout << "What is the " + infoDisplay << std::endl;
		std::getline(std::cin, inputInfo);
		if(inputInfo.empty())
			std::cout << "NO EMPTY INFO PLEASE 🌧️ " + infoDisplay << std::endl;
	} while (inputInfo.empty());
	return inputInfo;
}

void Contact::askContactInfos(int newId)
{
	this->_myId = newId;
	this->_firstName = askInfo("firstname");
	this->_lastName = askInfo("lastname");
	this->_nickName = askInfo("nickname");
	this->_phoneNumber = askInfo("phonenumber");
	this->_darkSecret = askInfo("dark secret");
}

void Contact::displayMyInfos() const
{
	std::cout << formatDisplay(std::to_string(this->_myId)); 
	std::cout << formatDisplay(this->_firstName); 
	std::cout << formatDisplay(this->_lastName);
	std::cout << formatDisplay(this->_nickName);
	std::cout << formatDisplay(this->_phoneNumber);
	std::cout << formatDisplay(this->_darkSecret) << std::endl;
}