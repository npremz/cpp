/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:09:00 by npremont          #+#    #+#             */
/*   Updated: 2024/08/30 10:43:30 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap clapper("waf");

	clapper.beRepaired(1);

	clapper.attack("Yappiste");
	clapper.attack("Yappiste");
	clapper.attack("Yappiste");

	clapper.takeDamage(5);

	clapper.beRepaired(1);
	clapper.beRepaired(1);
	clapper.beRepaired(1);
	clapper.beRepaired(1);
	clapper.beRepaired(1);
	clapper.beRepaired(1);
	clapper.beRepaired(1);
	clapper.beRepaired(1);
	clapper.beRepaired(1);
	clapper.beRepaired(1);
	
	clapper.attack("Yappiste");

	clapper.takeDamage(10);
	clapper.attack("Yappiste");
	clapper.beRepaired(1);
	return (0);
}
