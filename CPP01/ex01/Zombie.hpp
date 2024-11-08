/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:33:00 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 20:15:18 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>


class Zombie
{
	private:

    		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

	void    announce(void);
    void    set_name(std::string new_name);
};

Zombie*    zombieHorde(int N, std::string name);
    
#endif
