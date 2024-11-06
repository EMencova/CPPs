/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:18:25 by emencova          #+#    #+#             */
/*   Updated: 2024/11/05 19:24:48 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_weapon): name(new_name), weapon(new_weapon){}

void HumanA::attack()
{
    std::cout<<name<<"attacks with their "<<weapon.getType()<<std::endl;
}