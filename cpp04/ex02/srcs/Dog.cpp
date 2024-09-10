/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:37:56 by npremont          #+#    #+#             */
/*   Updated: 2024/09/10 10:52:40 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog constructor called." << std::endl;
	this->cervelle = new Brain();
    this->type = "Dog";
}

Dog::Dog(const Dog& other) : Animal()
{
    std::cout << "Dog copy constructor called." << std::endl;
	this->cervelle = new Brain(other.getBrain());
    this->type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignation operator called." << std::endl;
    if (this == &other)
        return (*this);
	if (this->cervelle)
		delete this->cervelle;
    this->type = other.type;
	this->cervelle = new Brain(other.getBrain());
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
	delete this->cervelle;
}

void Dog::makeSound(void) const
{
    std::cout << "Waf" << std::endl;
}

Brain&	Dog::getBrain() const
{
	return (*(this->cervelle));
}

void	Dog::setIdea(int idx, std::string idea)
{
	this->getBrain().setIdea(idx, idea);
}

std::string*	Dog::getIdeas()
{
	return (this->getBrain().getIdeas());
}
