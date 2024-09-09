/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:45:14 by npremont          #+#    #+#             */
/*   Updated: 2024/06/17 14:43:28 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP 

# include <iostream>
# include <string>

class Weapon 
{
	private:
		std::string type;
	
	public:
							Weapon();
							~Weapon();
							Weapon(std::string name);
		const std::string	&getType();
		void				setType(std::string name);
};

#endif
