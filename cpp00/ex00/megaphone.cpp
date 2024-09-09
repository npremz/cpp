/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:35:03 by npremont          #+#    #+#             */
/*   Updated: 2024/08/26 12:49:41 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}

	int i = 1;
	while (av[i])
	{
		int j = 0;
		while (av[i][j])
			std::cout << (char)std::toupper(av[i][j++]);
		++i;
	}
	std::cout << std::endl;
	return (0);
}
