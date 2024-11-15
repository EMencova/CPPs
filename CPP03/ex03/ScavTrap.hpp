/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:57:28 by emencova          #+#    #+#             */
/*   Updated: 2024/11/15 16:29:37 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private: 
       // ScavTrap();
        
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &original);
        ScavTrap &operator=(ScavTrap const &original);
        virtual ~ScavTrap();
    
        void guardGate() const;
        void attack(const std::string& target);
};


#endif