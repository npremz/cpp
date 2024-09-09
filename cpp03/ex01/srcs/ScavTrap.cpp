/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 11:34:38 by npremont          #+#    #+#             */
/*   Updated: 2024/09/01 10:42:46 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void) :
	ClapTrap("Random"),
	guarding_gate(false)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->hit_points = ScavTrap::hit_points_max;
	this->energy_points = ScavTrap::energy_points_max;
	this->attack_damage = ScavTrap::attack_damage_default;
}

ScavTrap::ScavTrap(std::string name) :
	ClapTrap(name),
	guarding_gate(false)
{
	std::cout << "ScavTrap \"" << name << "\" constructor called" << std::endl;
	this->hit_points = ScavTrap::hit_points_max;
	this->energy_points = ScavTrap::energy_points_max;
	this->attack_damage = ScavTrap::attack_damage_default;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->guarding_gate = other.guarding_gate;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	this->ClapTrap::operator=(other);
	this->guarding_gate = other.guarding_gate;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << "destructed." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now garding the gate" << std::endl;
	this->guarding_gate = true;
}