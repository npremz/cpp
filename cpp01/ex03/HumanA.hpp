/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:53:42 by npremont          #+#    #+#             */
/*   Updated: 2024/06/17 14:44:00 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP 

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon		&club;

	public:
		HumanA(std::string name, Weapon &club);
		~HumanA();
		void	attack();
};

#endif
