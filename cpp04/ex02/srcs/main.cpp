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

	Dog* benji = new Dog();

	std::cout << std::endl;

	benji->setIdea(12, "waf");
	std::cout << "Benji idea: " << benji->getIdeas()[12] << ", Adresse du tableau: "<< benji->getIdeas() << std::endl;

	Dog* casca = new Dog(*benji);
	std::cout << "Casca idea: " << casca->getIdeas()[12] << ", Adresse du tableau: "<< casca->getIdeas() << std::endl;

	std::cout << std::endl;

	delete benji;
	delete casca;

	// Animal *kouki = new Animal(); -> Renvoie une erreur

    return (0);
}
