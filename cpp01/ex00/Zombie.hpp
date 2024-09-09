/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:46:02 by npremont          #+#    #+#             */
/*   Updated: 2024/06/13 13:51:45 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP 

# include <iostream>
# include <string>

class Zombie {
  
  public:
    Zombie();
    ~Zombie();
    Zombie(std::string name);
	void  announce(void);

  private:
    std::string name;
	
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif // !ZOMBIE_HPP 
