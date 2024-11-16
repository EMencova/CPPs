/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:57:28 by emencova          #+#    #+#             */
/*   Updated: 2024/11/16 12:14:57 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{    
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &original);
        ScavTrap &operator=(ScavTrap const &original);
        ~ScavTrap();
    
        void guardGate() const;
        void attack(const std::string &target);
};


#endif