/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:57:09 by npremont          #+#    #+#             */
/*   Updated: 2024/08/26 14:16:10 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {}

Contact::Contact(std::string fn, std::string ln, std::string nm, std::string pn, std::string ds)
				: first_name(fn), last_name(ln), nickname(nm), phone_number(pn), darkest_secret(ds) {}

Contact::~Contact(void) {}

std::string Contact::trimName(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void	Contact::displayContact(void)
{
	printCentered("CONTACT INFO", 43);
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
	std::cout << std::endl << "Press ENTER to go back." << std::endl;
	std::cin.ignore();
}

std::string	Contact::getFirstName(void) {return (this->first_name);}
std::string	Contact::getLastName(void) {return (this->last_name);}
std::string	Contact::getNickName(void) {return (this->nickname);}
