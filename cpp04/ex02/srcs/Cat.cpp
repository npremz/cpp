/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:37:56 by npremont          #+#    #+#             */
/*   Updated: 2024/09/10 10:53:55 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat constructor called." << std::endl;
	this->cervelle = new Brain();
    this->type = "Cat";
}

Cat::Cat(const Cat& other) : Animal()
{
    std::cout << "Cat copy constructor called." << std::endl;
	this->cervelle = new Brain(other.getBrain());
    this->type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignation operator called." << std::endl;
    if (this == &other)
        return (*this);
	if (this->cervelle)
		delete this->cervelle;
    this->type = other.type;
	this->cervelle = new Brain(other.getBrain());
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
	delete this->cervelle;
}

void Cat::makeSound(void) const
{
    std::cout << "Waf" << std::endl;
}

Brain&	Cat::getBrain() const
{
	return (*(this->cervelle));
}

void	Cat::setIdea(int idx, std::string idea)
{
	this->getBrain().setIdea(idx, idea);
}

std::string*	Cat::getIdeas()
{
	return (this->getBrain().getIdeas());
}
