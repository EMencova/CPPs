/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:18:33 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 17:30:29 by emencova         ###   ########.fr       */
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

/*
void HumanB::attack()
{
    if (weapon)
        std::cout<<this->name<< "attacks with their " << this->weapon->getType()<<std::endl;
    
}
*/