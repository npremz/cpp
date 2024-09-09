/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:06:22 by npremont          #+#    #+#             */
/*   Updated: 2024/05/30 19:49:06 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.class.hpp"

class PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
		void	list_contact();

	private:
		Contact _contacts[8];
		int		id;
	
};

#endif
