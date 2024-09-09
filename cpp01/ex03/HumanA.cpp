/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:03:16 by npremont          #+#    #+#             */
/*   Updated: 2024/06/17 14:32:10 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA() {}

HumanA::HumanA(std::string name, Weapon &club) : name(name), club(club) {}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->club.getType() << std::endl;
}
