/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:01:33 by emencova          #+#    #+#             */
/*   Updated: 2024/11/16 13:01:50 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

    protected:
        std::string	_name;
        unsigned int	_hit_points;
		unsigned int	_energy_points;
		int			_attack_damage;
        
    public:
		ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &original);
        ClapTrap &operator=(ClapTrap const &original);
        ~ClapTrap();


		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        const std::string     &GetName() const;
        const unsigned int             &GetHitPoints() const;
        const unsigned int            & GetEnergyPoints() const;
        const int            & GetAttackDamage() const;
    
};



#endif