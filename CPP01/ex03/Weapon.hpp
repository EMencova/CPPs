/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:16:01 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 17:24:51 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <stdbool.h>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string new_type);
        ~Weapon();
        const std::string	&getType(); //CHANGED THIS
		void	setType(std::string new_type);
    
};

#endif