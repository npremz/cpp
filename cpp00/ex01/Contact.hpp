/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:06:20 by npremont          #+#    #+#             */
/*   Updated: 2024/05/29 12:36:19 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
	private:
		int index;
		char *first_name;
		char *last_name;
		char *nickname;
		char *phone_number;
		char *darkest_secret;
	
	public:
	/* SETTERS */
		void set_index(int value) {index = value;};
		void set_first_name(char *value) {first_name = value;};
		void set_last_name(char *value) {last_name = value;};
		void set_nickname(char *value) {nickname = value;};
		void set_phone_number(char *value) {phone_number = value;};
		void set_darkest_secret(char *value) {darkest_secret = value;};

	/* GETTERS */
		int get_index(int value) {return index;};
		char *get_first_name(char *value) {return first_name;};
		char *get_last_name(char *value) {return last_name;};
		char *get_nickname(char *value) {return nickname;};
		char *get_phone_number(char *value) {return phone_number;};
		char *get_darkest_secret(char *value) {return darkest_secret;};
};

#endif
