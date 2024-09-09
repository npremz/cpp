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
#include "../includes/WrongCat.hpp"

int main(void)
{
    Animal* sylvain = new Cat();
    Animal* benji = new Dog();
    Animal* kouki = new Animal();

    WrongAnimal* casca = new WrongAnimal();
    WrongAnimal* gabriel = new WrongCat();
    
    std::cout << sylvain->getType() << std::endl;
    std::cout << benji->getType() << std::endl;
    
    std::cout << std::endl;

    kouki->makeSound();
    sylvain->makeSound();
    benji->makeSound();

    std::cout << std::endl;

    casca->makeSound();
    gabriel->makeSound();

    std::cout << std::endl;

    delete sylvain;
    delete benji;
    delete kouki;
    delete casca;
    delete gabriel;

    return (0);
}