/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:08:59 by npremont          #+#    #+#             */
/*   Updated: 2024/09/10 10:52:18 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "idea " + std::to_string(i) + "!\n";
	}
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called." << std::endl;
	std::string* copy = other.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; ++i)
	{
		(this->ideas)[i] = copy[i];
	}
}

Brain&	Brain::operator=(const Brain& other)
{
	std::cout << "Brain assignation operator called." << std::endl;
	if (this == &other)
		return (*this);
	std::string* copy = other.getIdeas();
	for (int i = 0; i < 100; ++i)
	{
		(this->ideas)[i] = copy[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
	delete[] this->ideas;
}

void	Brain::setIdea(size_t idx, std::string idea)
{
	(this->ideas)[idx] = idea;
}

std::string*	Brain::getIdeas()	const
{
	return (this->ideas);
}
