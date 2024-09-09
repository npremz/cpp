/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 21:26:04 by npremont          #+#    #+#             */
/*   Updated: 2024/08/27 16:04:59 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP 

# include <iostream>
# include <string>

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:
        Harl();
        ~Harl();
        
        void complain(std::string level);
};

typedef void (Harl::*t_func)(void);

#endif
