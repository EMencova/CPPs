/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:16:01 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 19:24:22 by eliskam          ###   ########.fr       */
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
        const std::string	&getType();
		void	setType(std::string new_type);
    
};

#endif