/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:08:46 by npremont          #+#    #+#             */
/*   Updated: 2024/09/01 10:34:26 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    protected:
        std::string name;
    	int hit_points;
        int energy_points;
        int attack_damage;
        
    public:
        static const unsigned int	hit_points_max = 10;
		static const unsigned int	energy_points_max = 10;
		static const unsigned int	attack_damage_default = 0;

        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap(void);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
};

#endif
