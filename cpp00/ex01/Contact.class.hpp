/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:06:20 by npremont          #+#    #+#             */
/*   Updated: 2024/05/30 19:49:10 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

void	printCentered(const std::string text, int width);

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
  	
	public:
		Contact();
		Contact(std::string fn, std::string ln, std::string nm, std::string pn, std::string ds);
		~Contact();
		static std::string 	trimName(std::string str);
		std::string 		getFirstName(void);
		std::string 		getLastName(void);
		std::string 		getNickName(void);
		void				displayContact(void);
};

#endif
