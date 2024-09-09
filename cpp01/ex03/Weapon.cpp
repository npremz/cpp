/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:48:44 by npremont          #+#    #+#             */
/*   Updated: 2024/06/17 11:58:10 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("Randomm weapon...") {}

Weapon::Weapon(std::string name) : type(name) {}

Weapon::~Weapon() {}

const std::string	&Weapon::getType()
{
	std::string	&str_REF = this->type;
	return (str_REF);
}

void	Weapon::setType(std::string name)
{
	this->type = name;
}
