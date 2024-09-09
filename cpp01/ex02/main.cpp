/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:27:18 by npremont          #+#    #+#             */
/*   Updated: 2024/06/17 11:36:15 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str;
	std::string *str_PTR;
	std::string &str_REF = str;

	str = "HI THIS IS BRAIN";
	str_PTR = &str;

	std::cout << "str: " << str << std::endl;
	std::cout << "str_REF: " << &str_REF << std::endl;
	std::cout << "str_PTR: " << str_PTR << std::endl;
}
