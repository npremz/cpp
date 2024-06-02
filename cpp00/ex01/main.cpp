/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:05:03 by npremont          #+#    #+#             */
/*   Updated: 2024/05/30 19:58:10 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void	printCentered(const std::string text, int width)
{
	int padding_left = (width - text.length()) / 2;
	int	padding_right = width - text.length() - padding_left;

	std::cout << std::endl;

	std::cout << std::setfill('-') 
			  << std::setw(padding_left) << ""
			  << text
			  << std::setw(padding_right) << ""
			  << std::setfill(' ')
			  << std::endl;
	}

int	main(void) 
{
	std::string	command;
	PhoneBook	phonebook;

	std::cout << "Welcome to Phonebook !" << std::endl;
	while (1) 
	{
		std::cout << "You can use these commands:" << std::endl;
		std::cout << "- ADD" << std::endl << "- SEARCH" 
			<< std::endl << "- EXIT" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, command);
		if ("ADD" == command)
			phonebook.add();
		else if ("SEARCH" == command)
			phonebook.search();
		else if ("EXIT" == command)
			break;
		else
		{
			std::cout << "Invalid command..." << std::endl;
		}
	}
}
