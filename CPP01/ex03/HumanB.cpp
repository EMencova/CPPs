/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:18:33 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 20:27:03 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
{
    
    this->name = new_name;
    this->weapon = NULL;
}

HumanB::~HumanB()
{
    
}

void HumanB::setWeapon(Weapon *new_weapon)
{
    this->weapon = new_weapon;
}

void HumanB::attack()
{
        if (weapon != NULL)
            std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
        else 
            std::cout << this->name << " doesn't have a weapon to attack with." << std::endl;
        
}
