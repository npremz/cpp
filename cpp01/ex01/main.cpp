/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:45:56 by npremont          #+#    #+#             */
/*   Updated: 2024/06/17 11:08:38 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*Horde;

	Horde = zombieHorde(20, "Carl");
	for (int i = 0; i < 20; ++i)
	{
		Horde[i].announce();
	}
	delete[] Horde;
}
