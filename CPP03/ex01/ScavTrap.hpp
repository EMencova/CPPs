/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:57:28 by emencova          #+#    #+#             */
/*   Updated: 2024/11/15 14:17:43 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap()
{
    private:
        ScavTrap();

    public:
        
        ScavTrap(std::string name);
        ScavTrap(const ClapTrap &original);
        ScavTrap &operator=(ClapTrap const &original);
        ~ScavTrap();
    
}


#endif