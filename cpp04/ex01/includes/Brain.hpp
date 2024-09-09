/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:23:41 by npremont          #+#    #+#             */
/*   Updated: 2024/09/09 17:33:18 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain 
{
    protected:
        std::string *ideas;

    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        virtual ~Brain();

		void	setIdea(size_t idx, std::string idea);
		std::string	getIdea(int idx);
};

#endif
