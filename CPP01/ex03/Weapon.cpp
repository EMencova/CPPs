/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:16:30 by emencova          #+#    #+#             */
/*   Updated: 2024/11/05 19:19:40 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string new_type)
{
    type = new_type;
}

std::string &Weapon::getType()
{
   return (this->type);
}

void Weapon::setType(std::string wtype)
{
    this->type = wtype;
}