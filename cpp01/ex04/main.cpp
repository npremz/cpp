/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:53:33 by npremont          #+#    #+#             */
/*   Updated: 2024/08/30 14:57:57 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <cstdlib>

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cerr << "Wrong number of arguments!" << std::endl;
        return (EXIT_FAILURE);
    }

    std::string s1(av[2]);
    std::string s2(av[3]);

    if (replace(av[1], s1, s2))
        return (EXIT_FAILURE);

    return (EXIT_SUCCESS);
}
