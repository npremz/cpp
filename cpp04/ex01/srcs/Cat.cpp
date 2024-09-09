/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:37:56 by npremont          #+#    #+#             */
/*   Updated: 2024/09/06 10:53:33 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat constructor called." << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& other) : Animal()
{
    std::cout << "Cat copy constructor called." << std::endl;
    this->type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignation operator called." << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Miau" << std::endl;
}