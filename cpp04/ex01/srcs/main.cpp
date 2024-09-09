/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:49:58 by npremont          #+#    #+#             */
/*   Updated: 2024/09/06 11:06:24 by npremont         ###   ########.fr       */
/*   d                                                                         */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

#define ZOO 4

int main(void)
{
	Animal *zoo[ZOO];
	for (int i = 0; i < ZOO; ++i)
	{
		if (i % 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	for (int i = 0; i < ZOO; ++i)
	{
		delete zoo[i];
	}

	std::cout << std::endl;

	Animal* benji = new Dog();

	std::cout << std::endl;

	((Dog*)benji)->setIdea(12, "waf");
	std::cout << "Benji idea: " << ((Dog*)benji)->getIdea(12) << std::endl;

	Animal* casca = new Dog((Dog&)benji);
	std::cout << "Casca idea: " << ((Dog*)casca)->getIdea(12) << std::endl;

	std::cout << std::endl;

	delete benji;

    return (0);
}
