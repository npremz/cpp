/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:45:56 by npremont          #+#    #+#             */
/*   Updated: 2024/06/13 14:01:32 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*zombieHeap;

	zombieHeap = newZombie("HeapedZombie");
	zombieHeap->announce();	
	randomChump("StackedZombie");


	delete(zombieHeap);
}
