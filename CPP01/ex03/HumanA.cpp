/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:18:25 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 15:17:35 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_weapon): name(new_name), weapon(new_weapon){}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
    std::cout<<this->name<<"attacks with their "<<this->weapon.getType()<<std::endl;
}