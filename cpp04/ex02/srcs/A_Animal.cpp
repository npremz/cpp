/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:27:49 by npremont          #+#    #+#             */
/*   Updated: 2024/09/10 13:21:26 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/A_Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Copy Animal constructor called." << std::endl;
    this->type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal assignation operator called." << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called." << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << "*Animal sound*" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
