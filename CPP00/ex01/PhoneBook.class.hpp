/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabat <mrabat@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:50:44 by mrabat            #+#    #+#             */
/*   Updated: 2024/04/16 15:50:52 by mrabat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <limits>
#include "./utils.hpp"


#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H


class PhoneBook
{
private:
	Contact		_myContact[9];
	int			_currentContacts;
	int			_nbContacts;
	int			_maxContacts;
	void		searchContacts(void);
	void 		displayContactInfo(const std::string& searchID);

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