/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:48:03 by npremont          #+#    #+#             */
/*   Updated: 2024/06/17 15:10:09 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &club)
{
	this->club = &club;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->club->getType() << std::endl;
}
