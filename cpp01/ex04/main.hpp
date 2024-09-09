/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:59:41 by npremont          #+#    #+#             */
/*   Updated: 2024/09/01 10:14:23 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP 

# include <iostream>
# include <string>
# include <fstream>

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

int    replace(char *file_name, std::string s1, std::string s2);

#endif