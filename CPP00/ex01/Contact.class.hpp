#include <iostream>

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {
private:
	//attibut privee de la classe
	int _myId;
	std::string	_firstName; 
	std::string	_lastName; 
	std::string	_nickName; 
	std::string	_phoneNumber; 
	std::string	_darkSecret;
public:
	//fonctions constructuteurs et desctucteur de la calsse
	Contact(void);
	~Contact(void);

	//fonctions
	void	displayMyInfos(void) const;
	void	displayMyProfil() const;
	void	askContactInfos(int newId);
	
};

#endif