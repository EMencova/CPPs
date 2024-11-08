/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:18:36 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 16:09:27 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;

    public:
        HumanB(std::string new_name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon *new_weapon);
};


#endif