/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:18:33 by emencova          #+#    #+#             */
/*   Updated: 2024/11/05 20:18:59 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
{
    name = new_name;
}

void HumanB::attack()
{
    if(!weapon)
        std::cout<<name<< "doesnt have a weapon to attack with."<<std::endl;
    else
        std::cout<<name<< "attacks with their " << weapon->getType()<<std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
    weapon = &new_weapon;
}
