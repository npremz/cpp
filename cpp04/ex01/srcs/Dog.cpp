/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:37:56 by npremont          #+#    #+#             */
/*   Updated: 2024/09/09 17:29:32 by npremont         ###   ########.fr       */
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

void	Dog::setIdea(size_t idx, std::string idea)
{
	(this->cervelle)->setIdea(idx, idea);
}

std::string	Dog::getIdea(int idx)
{
	return ((this->cervelle)->getIdea(idx));
}

Brain&	Dog::getBrain() const
{
	return (*(this->cervelle));
}
