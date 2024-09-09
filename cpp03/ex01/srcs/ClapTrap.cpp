/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:08:54 by npremont          #+#    #+#             */
/*   Updated: 2024/08/30 10:43:49 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("Random"), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    name = other.name;
    hit_points = other.hit_points;
    energy_points = other.energy_points;
    attack_damage = other.attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &other)
    {
        name = other.name;
        hit_points = other.hit_points;
        energy_points = other.energy_points;
        attack_damage = other.attack_damage;
    }

    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		--this->energy_points;
	}
	else if (this->energy_points == 0)
		std::cout << "ClapTrap " << this->name << " was not able to attack " << target << " because it has no energy left!" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " was not able to attack " << target << " because it is dead!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " took " << amount << " damages!" << std::endl;
		this->hit_points -= amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points > 0 && this->hit_points > 0 && this->hit_points + amount <= 10)
	{
		std::cout << "ClapTrap " << this->name << " repaired itself " << amount << " hit points!" << std::endl;
		this->hit_points += amount;
		--this->energy_points;
	}
	else if (this->energy_points == 0)
		std::cout << "ClapTrap " << this->name << " can't repair itself because it has no energy left!" << std::endl;
	else if (this->hit_points + amount > 10 )
		std::cout << "ClapTrap " << this->name << " is already fully repaired!" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " can't repair itself because it is dead!" << std::endl;
}
