/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:16:30 by emencova          #+#    #+#             */
/*   Updated: 2024/11/05 13:49:37 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void Weapon::getType(std::string wtype)
{
    Weapon.type = wtype;
    std::cout<< wtype << std::endl;
    
}

void Weapon::getType(string wtype)
{
    wtype = Weapon.type;  
}