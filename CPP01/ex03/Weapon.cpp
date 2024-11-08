/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:16:30 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 15:36:51 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string new_type)
{
    this->setType(new_type);
}

Weapon::~Weapon()
{
    
}

std::string &Weapon::getType()
{
   return (this->type);
}

void Weapon::setType(std::string new_type)
{
    this->type = new_type;
}