/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:01:33 by emencova          #+#    #+#             */
/*   Updated: 2024/11/14 12:26:31 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

    private:
        std::string	_name;
        int			hit_points = 10;
		int			energy_points = 10;
		int			attack_damage = 0;    
        
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &original);
        ClapTrap &operator=(Fixed const &original);
        ~ClapTrap();


		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
    
};


#endif