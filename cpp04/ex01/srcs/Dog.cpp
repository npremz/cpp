/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:37:56 by npremont          #+#    #+#             */
/*   Updated: 2024/09/06 10:53:37 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog constructor called." << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& other) : Animal()
{
    std::cout << "Dog copy constructor called." << std::endl;
    this->type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignation operator called." << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Waf" << std::endl;
}