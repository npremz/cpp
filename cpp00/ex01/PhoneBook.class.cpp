/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:05:45 by npremont          #+#    #+#             */
/*   Updated: 2024/08/26 14:15:38 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->id = 0;
}

PhoneBook::~PhoneBook(void) {}

void PhoneBook::add(void)
{
	std::string first_name, last_name, nickname, phone, secret;

	std::cout << "New contact first name: ";
	std::getline(std::cin, first_name);
	std::cout << "New contact last name: ";
	std::getline(std::cin, last_name);
	std::cout << "New contact nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "New contact phone number: ";
	std::getline(std::cin, phone);
	std::cout << "New contact darkest secret: ";
	std::getline(std::cin, secret);

	if (first_name.empty() || last_name.empty() || nickname.empty() || phone.empty() || secret.empty())
	{
		std::cout << "Contact not saved: can't have empty fields" << std::endl;
		std::cout << "Press ENTER to continue" << std::endl;
		std::cin.ignore();
		return ;
	}
	this->_contacts[this->id++ % 8]= Contact(first_name, last_name, nickname, phone, secret);
	std::cout << "Contact added succesfully" << std::endl;
	std::cout << "Press ENTER to continue" << std::endl;
	std::cin.ignore();
}

void PhoneBook::list_contact()
{
	int i = 0;

	printCentered("SEARCH CONTACT", 43);
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i < 8 && i < this->id)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << Contact::trimName(this->_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << Contact::trimName(this->_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << Contact::trimName(this->_contacts[i].getNickName()) << std::endl;
		++i;
	}
	std::cout << std::endl;
}

void PhoneBook::search(void)
{
	std::string index;

	if (this->id == 0)
	{
		std::cout << "No contact to search for." << std::endl;
		std::cout << "Press ENTER to continue" << std::endl;
		std::cin.ignore();
		return ;
	}
	this->list_contact();
	while (1)
	{
		std::cout << "Enter an index or press ENTER to return to menu: ";
		std::getline(std::cin, index);
		if (index.empty())
			return ;
		else if (index.length() != 1 || index[0] < '0' || index[0] > '7' || index[0] - '0' >= this->id)
			std::cout << "invalid index. Try again.";
		else
		{
			this->_contacts[index[0] - '0'].displayContact();
			this->list_contact();
		}
	}
}
